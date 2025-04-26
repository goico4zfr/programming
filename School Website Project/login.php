<?php 
session_start();
include "database.php";

if(isset($_POST['studId']) && 
   isset($_POST['password'])) {
    function validate($data){
        $data = trim($data);
        $data = stripslashes($data);
        $data = htmlspecialchars($data);
        return $data;
    }
    

    $studId = validate($_POST['studId']);
    $pass = validate($_POST['password']);

    $data = "studId=" . $studId;

    if(empty($studId)) {
        $em = "Student Id Required";
        header("Location:log_in.php?error=$em&$data");
        exit();
    } else if(empty($pass)) {
        $em = "Password Required";
        header("Location:log_in.php?error=$em&$data");
        exit();
    } else{

        $sql = "SELECT * FROM sjc_users WHERE studentId = '$studId' AND student_Password = '$pass'";
        
        $result = mysqli_query($conn, $sql);

        if (mysqli_num_rows($result) === 1){
            $row = mysqli_fetch_assoc($result);

            if($row['studentId'] === $studId &&
               $row['student_Password'] === $pass) {
                $_SESSION['studentId'] = $row['studentId'];
                $_SESSION['fname'] = $row['fname'];
                $_SESSION['uid'] = $row['uid'];
                header("Location:index.php");
                exit(); 
               }else{
                header("Location:log_in.php?error=Mismatched Credentials");
                exit(); 
            }

        }else{
            header("Location:log_in.php?error=Mismatched Credentials");
            exit(); 
        }
    }

}else{
    header("Location:log_in.php");
    exit();
}
?>

           