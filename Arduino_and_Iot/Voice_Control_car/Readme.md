# Voice_Control_car

![image](https://user-images.githubusercontent.com/76275812/117559036-6ffbe580-b09f-11eb-8042-23ec4cfcd833.png)

## 📄 Abstract
The aim of our project is to make a Voice + Manually Controlable  Robot Car. The working is based on an Arduino microcontroller, motor drivers, A Bluetooth module. Arduino is an open-source hardware (single-board microcontrollers and kits) used for building digital devices. The idea is to first design the Hardware of the Robot Car and then code the entire working using our previous knowledge of programming. The code will then be simulated on software (IDE) and later be interfaced with the hardware. The coordination of the control unit with Bluetooth gadget is accomplished utilizing a Bluetooth module to catch and read the voice orders. The controlling remote is a smart android device with Bluetooth Application. We picked this as our project as robotics has become a major part of our everyday lifestyle and also has a wide scope in the engineering field. It plays a vital role in the development of new technology. 

## 🗒️ Introduction
Robotics is an evolving technology. There are Various approaches to build robots, and no one is sure which method or technology will be used 100 years from now. Robotics is evolving like the Darwinian evolutionary theory of survival of the fittest. The framework equipment comprises a controller outfitted with Bluetooth communication module. It’ll be connected to the motors and other alternative components of the car. When the Bluetooth app is turned on and is connected with the current system via Bluetooth, one will operate the car by giving wireless commands from the app using the functions already programmed in the app. The vehicle will motion in four directions: Forward, Backward, Right and Left. In forward movement, all four motors will motion in the same direction and for backward motion; movement of the motors will be in the opposite direction. For left and right movements, either of the motors will rotate and to stop the motors will stop. Instructions are given to the motors through the Bluetooth app of Android Smartphone by the user. In this project, we will deliberate how to control robot  car using Bluetooth module through Bluetooth application of an android mobile phone. The benefit of using a robot-controlled car is it can be used to reduce manual work. This project can be modified quite easily to include a camera that can stream the videos to the user over Wi-Fi using WiFi module.

### 📚 Tech stack
- ARDUINO UNO R3
- BLUETOOTH MODULE HC-05
- ADAFRUIT L293D MOTOR DRIVER
- 4 DC GEARED MOTORS
- JUMPER WIRES
- 12V POWER SUPPLY
- ARDUINO IDE<br>
![image](https://user-images.githubusercontent.com/76275812/111875488-0ffe9200-89c0-11eb-887d-20849377a7d5.png)

- MIT APP INVENTOR<br>
![image](https://user-images.githubusercontent.com/76275812/111875505-23a9f880-89c0-11eb-9eaf-42b8cce2979c.png)

###  Block Diagram<BR>
![image](https://user-images.githubusercontent.com/76275812/111874925-33740d80-89bd-11eb-88fe-c592899b3678.png)<BR>
  The Arduino Wireless Voice Controlled Robot comprises a transmitter and a beneficiary segment. The transmitter end comprises Smartphone Bluetooth and the Android application introduced on it. Thus, the Receiver area has an Arduino board as a processor, HC-05 Bluetooth Module as a remote communication module, L293D for driving engines, and a couple of DC designed as a section for moving robots.<BR>

### 💡 Circuit Schematic 
  ![image](https://user-images.githubusercontent.com/76275812/111874987-6f0ed780-89bd-11eb-9ad7-25a4dcf27ff9.png)<br>
  The circuit comprises Arduino UNO Board, HC-05/HC-06 Bluetooth Module, L293D Motor Driver IC, a couple of DC Geared Motors of 250 RPM and a 9V Battery. The TX, RX pins of Arduino are associated with Rx, Tx pins of Bluetooth Module. The Bluetooth Module is provided with 5V. Essentially, the left DC engine is associated with pin no 3 and 6 of L293D and right DC engine to stick no 14 and 11 of L293D. Arduino advanced pins 2,3,4,5 are associated with L293D 2, 7, 10, 15 respectively. The L293D IC Pins 2, 5, 12, 13 are GND pins, and 9, 1, 16 is provided with 5V. Be that as it may, pin 8 of L293D is straightforwardly provided with 9V

  ### ⚙ Working
  The block diagram of the simple voice controlled robotic vehicle is given it consists of the smartphone that recognizes the voice commands and are being wirelessly transferred to the Bluetooth module HC05. The module at that point changes over the order to content and the series of characters are sent to the Arduino for additional handling. The Arduino microcontroller decodes the string and correspondingly performs further capacities. The signals are sent to the motor that hence powers and drives the motors connected to it. On the Transmitter area, commands are given to the Mobile Application through the mic. This portable handset is associated with the moving vehicle by means of Bluetooth module. The portable application utilized, is modified so that the voice orders given to the handset are received by the mic and these simple voice orders are changed over to advanced word successions (A to D transformation). These stored sequences are then transmitted to the robotic vehicle via Bluetooth transceiver module and are sent to the transceiver controller. Android application transceiver is used to decode the received signal with the Bluetooth module. The controller contrasts these signals and then puts away program orders in it and converts them into voice strings. The voice strings are then used to run the dc motor engines for the ideal interval of time. The microcontroller, sends directions, which when executed, helps in working of the engine driver. The yield of the Arduino goes to the engine driver IC and it controls the specific engine. A DC power supply is required to run the system. The DC power supply feeds the Microcontroller and the Bluetooth module.
  
 ### Working Video
  https://youtu.be/DADdqZkQDy4
  ### 🔑 KEY FEATURES OF THE APP
- We can control this through our voice as well as manually by clicking on to the buttons


![image](https://user-images.githubusercontent.com/76275812/111875845-d9297b80-89c1-11eb-9261-d9ee494b30d7.png)


- A separate button is given to disconnect the car<br>


![image](https://user-images.githubusercontent.com/76275812/111875963-68369380-89c2-11eb-9f05-fc631a625b4c.png)<br>


- <b>AUTO DESTRUCTION MODE BUTTON</b>- by pressing this button our power source can be converted into a live bomb and can blast anytime<br>


![image](https://user-images.githubusercontent.com/76275812/111876054-e135eb00-89c2-11eb-863f-376fc23e2b15.png)<br>


- <b>INFRARED VISION MODE</b>- This mode will be used to see to see the enemy from a long distance back and it will be easy to detect any type of living being.<br>


 ![image](https://user-images.githubusercontent.com/76275812/111876106-26f2b380-89c3-11eb-9d12-6174ec629481.png)<br>
 

 ### 📍 Steps to control the robotic vehicle
- Install the voice+manual control robot.apk file  
- Pair HC-05 Bluetooth module with the mobile Default password is “1234” or “0000”  in our case we have changed the bluetooth module name and password for getting effective communication and it cannot be hacked.
- Click on the “MIC” icon and speak/instruct the robot 
- On speaking our speech gets recognized and converted into text. 
- That text is transferred using Bluetooth  
- The Bluetooth Module receives the string, decodes it and compares it with the Instructions that are described in the program and moves the robot in forward direction
  
### 📌 Advantages 
- The Robot is small in size, therefore less space required.
- We can access the robot vehicle from the distance of meters if we  use WIFI for the connection between robot and the server PC.
- As we can use  a camera which will be attached to the robot so it will capture video which will be used for security.
- Low power consumption.
- The robot is useful in places where humans find difficult to reach     but human voice reach. Such as in fire situations, in highly toxic areas.
- The robot can be used for monitoring or investigation.
- The voice controlled robotic car can be easily driven by an unskilled driver by using voice commands with the help of android application in smartphone.


### 📌 FUTURE SCOPE
- This task work has been limited to short range Bluetooth modules.Utilizing long range modules and different communication protocols, we can improve on the network with the robot for significant distances. 
- A warm camera can be introduced to detect the warmth produced by bodies valuable in military purposes to distinguish foes on the lines. 
- Programmed Targeting System can be executed in the robot for following the objective.
- Further upgrades in venture can be utilized for Home security and military purposes where the orders can be given to robot without chance by expanding the range and by introducing cameras.
- The robot is valuable in places where people discover hard to reach however human voice comes to. For example, in fire circumstances, in profoundly poisonous zones. 
- It is one of the significant phases of Humanoid robots. 
- Discourse and voice acknowledgment security frameworks.
- The robot can be used for monitoring or investigation.

### 📌 DETAILED EXPLANATION ON HOW THIS ROBOT CAN BE USED FOR DEFENCE SYSTEMS

Let’s take a small case where special forces are going to conduct a surgical strike on the enemy in the area of enemy as the strike is going to be conducted in the area of enemy so they need to be prepared for anything unusual that can take place in the area of enemy such as they can find land mines anywhere on the ground so in order to provide less risk to the life our military lets see how different features of this robot car will be so much useful in providing less risk to the life of soldier.
- <b>By the introduction of thermal camera.</b>


![image](https://user-images.githubusercontent.com/76275812/111860923-9ab7a080-8970-11eb-8b97-86619eef4eb1.png)


<br>A thermal camera can easily detect the heat coming from any human body or any living being so it will be helpful for the special forces to detect any terrorist from a long distance even at the time of night.
- <b>By introduction of ultrasonic sensors to avoid obstacle</b>
An ultrasonic sensor can easily observe the obstacle through ultrasonic waves and it will be even helpful for finding the distance of the enemy depending on how far the enemy is sitting.


![image](https://user-images.githubusercontent.com/76275812/111861003-ff72fb00-8970-11eb-92b2-d8e3191a6006.png)


- <b>By the introduction of self destruction</b>
We will be using lithium ion batteries which are flammable and we will convert that power source in such a way that the power source of the car can be easily converted into the live bomb and then if enemy how so ever touches the car we can simply press the autodestruction mode on our car and it will create a explosion which will kill two or three enemies at that very point of time.<br>


![image](https://user-images.githubusercontent.com/76275812/111861170-41e90780-8972-11eb-82bb-0ae4da021410.png)<br>
- <b> Voice control feature</b>
<br>We have introduced a voice control feature which is much needed for the special forces because they conduct strikes in the areas of enemy and they need to be attentive at every point time so what this voice control feature will help is that they can easily command through mic which they wear while holding guns in their hands.<br>
![image](https://user-images.githubusercontent.com/76275812/111874704-6cf84900-89bc-11eb-8db0-58ad74361562.png)<br>
- <b> Manual control feature </b><br>
This feature will help them when enemy is too near and soldier may have risk that their voice can be heard by the enemy so at that time they will use manual control mode to control their car <br>
![image](https://user-images.githubusercontent.com/76275812/111874821-e3954680-89bc-11eb-916d-b6856c9aa91f.png)<br>

### 🌈 CONCLUSION
The proposed framework of our project shows how a robot can be controlled utilizing Bluetooth. The voice controlling orders are effectively transmitted through Bluetooth innovation and the desired activities effectively happen. This task lessens human endeavours at spots or circumstances where human intercessions are troublesome. Such frameworks can be brought into utilization at spots, for example, businesses, military and guard, investigate purposes, and so forth.
