<?php
include "database.php";
$data = array();
if ($sql = $conn->query("SELECT * FROM texbooks "));
if ($sql->num_rows) {
    while ($row = $sql->fetch_object()) {
        $data[] = $row;
    }

    $sql->free();
}
?>

<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8" />
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
        <meta name="description" content="" />
        <meta name="author" content="" />
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
    <body class="d-flex flex-column h-100 bg-light">
        <main class="flex-shrink-0">
            <!-- Navigation-->
            <nav class="navbar navbar-expand-lg navbar-light bg-white py-3">
                <div class="container px-5">
                    <a class="navbar-brand" href="index.html"><span class="fw-bolder text-primary"><img class="logo-img" src="Images/SJC_logo.PNG" alt="SJC Logo" /></span></a>
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
            <!-- Projects Section-->
         <!--   <section class="py-5">
                <div class="container px-5 mb-5">
                    <div class="text-center mb-5">
                        <h1 class="display-5 fw-bolder mb-0"><span class="text-gradient d-inline">Projects</span></h1>
                    </div>
                    <div class="row gx-5 justify-content-center">
                        <div class="col-lg-11 col-xl-9 col-xxl-8">
                             Project Card 1
                            <div class="card overflow-hidden shadow rounded-4 border-0 mb-5">
                                <div class="card-body p-0">
                                    <div class="d-flex align-items-center">
                                        <div class="p-5">
                                            <h2 class="fw-bolder">Project Name 1</h2>
                                            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Eius at enim eum illum aperiam placeat esse? Mollitia omnis minima saepe recusandae libero, iste ad asperiores! Explicabo commodi quo itaque! Ipsam!</p>
                                        </div>
                                        <img class="img-fluid" src="https://dummyimage.com/300x400/343a40/6c757d" alt="..." />
                                    </div>
                                </div>
                            </div>
                             Project Card 2
                            <div class="card overflow-hidden shadow rounded-4 border-0">
                                <div class="card-body p-0">
                                    <div class="d-flex align-items-center">
                                        <div class="p-5">
                                            <h2 class="fw-bolder">Project Name 2</h2>
                                            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Eius at enim eum illum aperiam placeat esse? Mollitia omnis minima saepe recusandae libero, iste ad asperiores! Explicabo commodi quo itaque! Ipsam!</p>
                                        </div>
                                        <img class="img-fluid" src="https://dummyimage.com/300x400/343a40/6c757d" alt="..." />
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </section> -->
            <!-- Call to action section-->
            <section id="Academic_Tracks" class="bg-light py-5">
                            <div class="container px-5">
                                <div class="row gx-5 justify-content-center">
                                    <div class="col-xxl-8">
                                        <div class="text-center my-5">
                                            <h2 class="display-5 fw-bolder"><span class="Black-text">Programs</span></h2>
                                            <p class="lead fw-light mb-4">List of Programs</p>
                                        </div>
                                    </div>
                                    <table>
                                        <thead>
                                            <tr>
                                          <th>Textbook ISB</th>
                                          <th>Textbook Title</th> 
                                          <th>Textbook Authors</th>
                                          <th>Textbook Year</th>
                                          <th>Textbook Page Count</th>
                                          <th>Textbook Description</th>
                                          <th>Textbook Category</th>
                                          <th>Textbook Publisher</th>
                                          <th>Textbook Price</th>
                                        </tr>
                                        </thead>
                                        <tbody>
                                            <?php 
                                    
                                            foreach ($data as $n) {?>
                                                <tr id="<?php echo $n->ISB; ?>">
                                                    <td><?php echo $n->ISB; ?></td>
                                                    <td><?php echo $n->Title; ?></td>
                                                    <td><?php echo $n->Authors; ?></td>
                                                    <td><?php echo $n->Year; ?></td>
                                                    <td><?php echo $n->Page_Count; ?></td>
                                                    <td><?php echo $n->Description; ?></td>
                                                    <td><?php echo $n->Category; ?></td>
                                                    <td><?php echo $n->Publisher; ?></td>
                                                    <td><?php echo $n->Price; ?></td>
                                                </tr>
                                                <?php } ?>
                                            </tbody>
                                            </table>
                                      <p><br></p>
                                </div> 
                            </div>
                        </section>
                        <!-- Divider-->
                        <div class="pb-5"></div>
            <section class="py-5 bg-gradient-primary-to-secondary text-white">
                <div class="container px-5 my-5">
                    <div class="text-center">
                        <h2 class="display-4 fw-bolder mb-4">Order A Textbook</h2>
                        <a class="btn btn-outline-light btn-lg px-5 py-3 fs-6 fw-bolder" href="log_in.php">Log-in</a>
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
                        <a class="small" href="programs_list.html">Programs List</a>
                    </div>
                </div>
            </div>
        </footer>
        <!-- Bootstrap core JS-->
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js"></script>
        <!-- Core theme JS-->
        <script src="js/scripts.js"></script>
    </body>
</html>
