<?php 
include "database.php";

if( isset($_POST['fName']) &&     
    isset($_POST['mName']) && 
    isset($_POST['lName']) &&
    isset($_POST['studId']) &&
    isset($_POST['password'])) {
    
    $fname = $_POST['fName'];
    $mname = $_POST['mName'];
    $lname = $_POST['lName'];
    $studId = $_POST['studId'];
    $pass = $_POST['password'];

   $data = 'fName=' . $fname . '&mName=' . $mname . '&lName=' . $lname . '&studId=' . $studId;

    
    if(empty($fname)) {
        $em = "First Name Required";
        header("Location:signup.php?error=$em&$data");
        exit;
    }
    else if(empty($mname)) {
        $em = "Middle Name Required";
        header("Location:signup.php?error=$em&$data");
        exit;
    }
    else if(empty($lname)) {
        $em = "Last Name Required";
        header("Location:signup.php?error=$em&$data");
        exit;
    }
    else if(empty($studId)) {
        $em = "Student Id Required";
        header("Location:signup.php?error=$em&$data");
        exit;
    } 
    else if(empty($pass)) {
        $em = "Password Required";
        header("Location:signup.php?error=$em&$data");
        exit;
    }
   
     else{

        //hashing the password (recommended)
       // $pass = password_hash($pass, PASSWORD_DEFAULT);
        
            $sql2 = "INSERT INTO sjc_users(fname, mname, lname, studentId, student_Password)
                     VALUES(?, ?, ?, ?, ?)";
            $stmt = $conn->prepare($sql2);
            $stmt->execute([$fname, $mname, $lname, $studId, $pass]);

            header("Location:signup.php?success=Your account has been created successfully"); 
            exit();
           // $result2 = mysqli_query($conn, $sql2);
           // if($result2) {
           //     header("Location:signup.php?success=Your account has been created successfully");
           //     exit();
     //    }
        //hashing password(not recommended)
//        $pass = md5($pass);
//
  //      $sql = "SELECT * FROM sjc_users WHERE studentId='$studId' ";
    //    $result = mysqli_query($conn, $sql);

//        if(mysqli_num_rows($result) > 0) {
  //          header("Location:signup.php?error=This student ID is already in use&$user_data");
    //        exit();
      //  }else{
           
  // else{
 //               header("Location:signup.php?error=unknown error occurred&$user_data");
  //              exit();
 //           }
//        }
     }
    }else{
    header("Location:signup.php"); 
    exit();
}