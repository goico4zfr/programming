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
                    <!-- Contact form-->
                    <div class="bg-light rounded-4 py-5 px-4 px-md-5">
                        <div class="text-center mb-5">
                            <div class="feature bg-primary bg-gradient-primary-to-secondary text-white rounded-3 mb-3"><i class="bi bi-envelope"></i></div>
                            <h1 class="fw-bolder">Log In</h1>
                            <p class="lead fw-normal text-muted mb-0"> to SJC Online</p>
                        </div>
                        <div class="row gx-5 justify-content-center">
                            <div class="col-lg-8 col-xl-6">
                                <!-- * * * * * * * * * * * * * * *-->
                                <!-- * * SB Forms Contact Form * *-->
                                <!-- * * * * * * * * * * * * * * *-->
                                <!-- This form is pre-integrated with SB Forms.-->
                                <!-- To make this form functional, sign up at-->
                                <!-- https://startbootstrap.com/solution/contact-forms-->
                                <!-- to get an API token!-->
                                <form action="login.php" method="post" >
                                    <!-- error for not acquiring username or password -->
                                <?php if(isset($_GET['error'])) { ?>
                                            <p class="error"><?php echo $_GET['error']; ?></p>
                                        <?php } ?>
                                    <!-- Student ID input-->
                                    <div class="form-floating mb-3">  
                                        <input class="form-control" name="studId" type="text" placeholder="Enter your Student ID"/>
                                        <label for="studId">Student ID</label>
                                    </div>
                                    <!-- Email address input-->
                                   <!-- <div class="form-floating mb-3">
                                        <input class="form-control" id="email" type="email" placeholder="name@example.com" data-sb-validations="required,email" />
                                        <label for="email">Email address</label>
                                        <div class="invalid-feedback" data-sb-feedback="email:required">An email is required.</div>
                                        <div class="invalid-feedback" data-sb-feedback="email:email">Email is not valid.</div>
                                    </div> -->
                                    <!-- Phone number input-->
                                   <div class="form-floating mb-3">
                                        <input class="form-control" name="password" type="password" placeholder="Enter Your Password"/>
                                        <label for="password">Password</label>
                                    </div> 
                                    <!-- Message input-->
                                   <!-- <div class="form-floating mb-3">
                                        <textarea class="form-control" id="password" type="password" placeholder="Enter your password" style="height: 10rem" data-sb-validations="required"></textarea>
                                        <label for="password">Password</label>
                                        <div class="invalid-feedback" data-sb-feedback="message:required">A password is required.</div>
                                    </div>
                                    Submit success message--> 
                                    <!-- This is what your users will see when the form-->
                                    <!-- has successfully submitted-->
                               <!--     <div class="d-none" id="submitSuccessMessage">
                                        <div class="text-center mb-3">
                                            <div class="fw-bolder">Form submission successful!</div>
                                            To activate this form, sign up at
                                            <br />
                                            <a href="https://startbootstrap.com/solution/contact-forms">https://startbootstrap.com/solution/contact-forms</a>
                                        </div>
                                    </div> -->
                                    <!-- Submit error message-->
                                    <!---->
                                    <!-- This is what your users will see when there is-->
                                    <!-- an error submitting the form-->
                                  <!--  <div class="d-none" id="submitErrorMessage"><div class="text-center text-danger mb-3">Error sending message!</div></div> -->
                                  <p>Don't have an account? <a href="signup.php"> Create Now</a></p>
                                    <!-- Submit Button-->
                                    <button type="submit">Log In</button>
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
