<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8" />
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
        <meta name="description" content />
        <meta name="author" content />
        <title>SJC Online</title>
        <!-- Favicon-->
        <link rel="icon" type="image/x-icon" href="assets/favicon.ico" />
        <!-- Custom Google font-->
        <link rel="preconnect" href="https://fonts.googleapis.com" />
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin />
        <link href="https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@100;200;300;400;500;600;700;800;900&amp;display=swap" rel="stylesheet" />
        <!-- Bootstrap icons-->
        <link href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.8.1/font/bootstrap-icons.css" rel="stylesheet" />
        <!-- Core theme CSS (includes Bootstrap)-->
        <link href="css/styles.css" rel="stylesheet" />
    </head>
    <body class="d-flex flex-column">
        <main class="flex-shrink-0">
            <!-- Navigation-->
            <nav class="navbar navbar-expand-lg navbar-light bg-white py-3">
                <div class="container px-5">
                    <a class="navbar-brand" href="index.php"><span class="fw-bolder text-primary"><img class="logo-img" src="Images/SJC_logo.PNG" alt="SJC Logo" /></span></a>
                    <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation"><span class="navbar-toggler-icon"></span></button>
                    <div class="collapse navbar-collapse" id="navbarSupportedContent">
                        <ul class="navbar-nav ms-auto mb-2 mb-lg-0 small fw-bolder">
                            <li class="nav-item"><a class="nav-link" href="index.php">Home</a></li>
                            <li class="nav-item"><a class="nav-link" href="programs_list.php">Programs List</a></li>
                            <li class="nav-item"><a class="nav-link" href="course_details.php">Courses</a></li>
                            <li class="nav-item"><a class="nav-link" href="textbook_details.php">Textbooks</a></li>
                            <li class="nav-item"><a class="nav-link" href="about_us.html">About Us</a></li>
                            <form action="search.html">
                                <input type="text" placeholder="Search...">  
                            </form>                   
                        </ul>
                    </div>
                </div>
            </nav>
            <!-- Page content-->
            <section class="py-5">
                <div class="container px-5">
                    <!-- Signup form-->
                    <div class="bg-light rounded-4 py-5 px-4 px-md-5">
                        <div class="text-center mb-5">
                            <div class="feature bg-primary bg-gradient-primary-to-secondary text-white rounded-3 mb-3"><i class="bi bi-envelope"></i></div>
                            <h1 class="fw-bolder">Sign Up</h1>
                            <p class="lead fw-normal text-muted mb-0">for SJC Online</p>
                        </div>
                        <div class="row gx-5 justify-content-center">
                            <div class="col-lg-8 col-xl-6">
                                <form action="signup-check.php" method="post" >
                                    <!--error for not acquiring required info-->
                                <?php if(isset($_GET['error'])) { ?>
                                            <p class="error"><?php echo $_GET['error']; ?></p>
                                        <?php } ?>

                                <?php if(isset($_GET['success'])) { ?>
                                            <p class="success"><?php echo $_GET['success']; ?></p>
                                        <?php } ?>
                                    <!--student first name input -->
                                    <div class="form-floating mb-3">                                      
                                        
                                        <?php if(isset($_GET['fName'])) { ?>
                                            <input class="form-control" 
                                            name="fName" 
                                            type="text" 
                                            placeholder="Enter your first name" 
                                            value="<?php echo $_GET['fName']; ?>"/>
                                        <?php }else{ ?> 
                                            <input class="form-control" 
                                            name="fName" 
                                            type="text" 
                                            placeholder="Enter your first name"/>
                                            <?php } ?>
                                        <label for="fName">Student First Name</label>
                                    </div>

                                    <!--student middle name input -->
                                    <div class="form-floating mb-3"> 
                                    <?php if(isset($_GET['mName'])) { ?>
                                            <input class="form-control" 
                                            name="mName" 
                                            type="text" 
                                            placeholder="Enter your middle name" 
                                            value="<?php echo $_GET['mName']; ?>"/>
                                        <?php }else{ ?> 
                                            <input class="form-control" 
                                            name="mName" 
                                            type="text" 
                                            placeholder="Enter your middle name"/>
                                            <?php } ?>                                     
                                        <label for="mName">Student Middle Name</label>
                                    </div>

                                    <!--student last name input -->
                                    <div class="form-floating mb-3"> 
                                    <?php if(isset($_GET['lName'])) { ?>
                                            <input class="form-control" 
                                            name="lName" 
                                            type="text" 
                                            placeholder="Enter your last name" 
                                            value="<?php echo $_GET['lName']; ?>"/>
                                        <?php }else{ ?> 
                                            <input class="form-control" 
                                            name="lName" 
                                            type="text" 
                                            placeholder="Enter your last name"/>
                                            <?php } ?>                                     
                                        <label for="lName">Student Last Name</label>
                                    </div>

                                    <!--student id input -->
                                    <div class="form-floating mb-3"> 
                                    <?php if(isset($_GET['studId'])) { ?>
                                            <input class="form-control" 
                                            name="studId" 
                                            type="text" 
                                            placeholder="Enter your Student ID" 
                                            value="<?php echo $_GET['studId']; ?>"/>
                                        <?php }else{ ?> 
                                            <input class="form-control" 
                                            name="studId" 
                                            type="text" 
                                            placeholder="Enter your Student ID"/>
                                            <?php } ?>                                     
                                        <label for="studId">Student ID</label>
                                    </div>

                                    <!--Student Password -->
                                   <div class="form-floating mb-3">
                                        <input class="form-control" 
                                        name="password" 
                                        type="password" 
                                        placeholder="Enter Your Password"/>
                                        <label for="password">Password</label>
                                    </div> 
                                  <p><a href="log_in.php">Already have an account?Login</a></p>
                                    <!-- Submit Button-->
                                    <button type="submit">Sign Up</button>
                                </form>
                            </div>
                        </div>
                    </div>
                </div>
            </section>
        </main>
        <!-- Footer-->
        <footer class="bg-white py-4 mt-auto">
            <div class="container px-5">
                <div class="row align-items-center justify-content-between flex-column flex-sm-row fw-light">
                    <div class="col-auto"><div class="small m-0">Copyright &copy; SJC 2023</div></div>
                    <div class="col-auto">
                        <a class="small" href="search.html">Search</a>
                        <span class="mx-1">&middot;</span>
                        <a class="small" href="">Tuition Calculator</a>
                        <span class="mx-1">&middot;</span>
                        <a class="small" href="programs_list.php">Programs List</a>
                    </div>
                </div>
            </div>
        </footer>
        <!-- Bootstrap core JS-->
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js"></script>
        <!-- Core theme JS-->
        <script src="js/scripts.js"></script>
        <!-- * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *-->
        <!-- * *                               SB Forms JS                               * *-->
        <!-- * * Activate your form at https://startbootstrap.com/solution/contact-forms * *-->
        <!-- * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *-->
        <script src="https://cdn.startbootstrap.com/sb-forms-latest.js"></script>
    </body>
</html>