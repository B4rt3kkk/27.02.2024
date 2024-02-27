<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Główna</title>
</head>
    <body>
        <nav>
        <h2>Bartolini Pietruszka</h2>
        <ul>
            <li><a href="index.php">Główna</a></li>
            <li><a href="pobieranie.php">Pobieranie Rekordów</a></li>
        </ul>
        </nav>

    <div class="rekordy">

    <?php

        $all_records = $conn->query("SELECT czujniki.ID,czujniki.CENACZUJNIKA,czujniki.NAZWA,czujniki.KATEGORIA FROM czujniki" );
        while(list($ID,$CENACZUJNIKA,$NAZWA,$KATEGORIA)=mysqli_fetch_row($all_records)){
        echo("<li><b>$ID</b>,<i>$CENACZUJNIKA,$NAZWA,$KATEGORIA</i></li>");
        }
    ?>

    </div>

    </body>
</html>