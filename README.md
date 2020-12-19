<h1>Why you need this?</h1>
You need this because its really difficult to display numbers you need to give voltage one by one to the frames so i wasted my time to you not waste your time.


<h1>Setup</h1>
All you need to do is assign your pins to the parameter of digit_controller variable with an array. Ex:<br />
  int pins[8];<br />
  for(int j = 3; j<= 10; j++)<br />
    pins[j-3] = j;<br />
pins[] including : 3,4,5,6,7,8,9,10
then creating the object. Ex:
11: vcc, true for anode false for cathode
digit_controller *b = new digit_controller(pins,11,true);
for printing a number use "digit_print(int num)". Ex:
b->digit_print(3);
for counting numbers with delay use "array_print(int *arr, int array_length, int print_delay = 1000)". Ex:
int arrr[14] = {1,9,7,6,0,1,2,3,4,5,6,7,8,9};
b->array_print(arrr, 14, 500);

<img src="https://cdn.discordapp.com/attachments/709732264962949160/789921927451902002/setup.PNG" width="1000">

<h1>WARNING</h1>
This library has been used on the anode 7 segment display NOT TRIED ON THE CATHODE 7 SEGMENT DISPLAY please use this on ON YOUR OWN RISK.

