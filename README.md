<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Weather Monitoring System using Arduino</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f0f0f0;
            text-align: center;
        }
        header {
            background-color: #4CAF50;
            color: white;
            padding: 1em;
        }
        .container {
            margin: 2em auto;
            max-width: 800px;
            background: white;
            padding: 2em;
            border-radius: 8px;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
        }
        img {
            max-width: 100%;
            height: auto;
            border-radius: 8px;
        }
        h2 {
            color: #4CAF50;
        }
    </style>
</head>
<body>
    <header>
        <h1>Weather Monitoring System using Arduino</h1>
    </header>
    <div class="container">
        <h2>Project Overview</h2>
        <p>This project is a simple weather monitoring system using Arduino. It measures temperature, humidity, and other environmental parameters using various sensors and displays the data on an LCD screen.</p>

        <h2>Features</h2>
        <ul>
            <li>Measures temperature and humidity using DHT11/DHT22 sensor.</li>
            <li>Displays data on an LCD screen or a web interface.</li>
            <li>Data logging capabilities for long-term monitoring.</li>
        </ul>

        <h2>Project Setup</h2>
        <p>Connect the DHT11/DHT22 sensor to the Arduino as per the circuit diagram below. Make sure to install the necessary libraries in the Arduino IDE.</p>
        
        <img src="images/setup.jpg" alt="Project Setup">

        <h2>Demonstration Video</h2>
        <p>Watch the video demonstration below:</p>
        <video controls width="600">
            <source src="videos/demo.mp4" type="video/mp4">
            Your browser does not support the video tag.
        </video>

        <h2>Source Code</h2>
        <p>You can find the complete source code on the <a href="https://github.com/your-username/your-repo-name">GitHub repository</a>.</p>
    </div>
</body>
</html>
