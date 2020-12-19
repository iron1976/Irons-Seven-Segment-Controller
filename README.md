<h1>Why you need this?</h1>
You need this because its really difficult to display numbers you need to give voltage one by one to the frames so i wasted my time to you not waste your time.

<img src="https://cdn.discordapp.com/attachments/711524717743308821/786261391954673704/thumbnail.png" width="800">
</body>
<h1>Setup</h1>
All you need to do is assign your pins to the parameter of digit_controller variable with an array. Ex:
  int pins[8];
  for(int j = 3; j<= 10; j++)
    pins[j-3] = j;
pins[] including : 3,4,5,6,7,8,9,10
<img src="https://cdn.discordapp.com/attachments/709732264962949160/789921927451902002/setup.PNG" width="1000">

<h1>WARNING</h1>
This library has been used on the 7 segment anode display NOT TRIED ON THE CATHODE please use this on ON YOUR OWN RISK.

