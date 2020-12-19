#ifndef _HEADERFILE_H
#define _HEADERFILE_H
#endif
#include "Arduino.h"

class digit_controller
{
  private: 
    //8 pins in total
    int* pins;
	  bool cathode = false;
    void print_number(int num)
    {
      this->clear();
      if(num == -1)
      {
        turn_on(pins[7]);
      }
      else if(num == 0)
      {
        for(int j = 1; j<7; j++)
          turn_on(pins[j]);
      }
      else if(num == 1)
      {
        turn_on(pins[3]);
        turn_on(pins[6]);
      }
      else if(num == 2)
      {
        turn_on(pins[2]);
        turn_on(pins[3]);
        turn_on(pins[0]);
        turn_on(pins[4]);
        turn_on(pins[5]);
      }
      else if(num == 3)
      {
        turn_on(pins[2]);
        turn_on(pins[3]);
        turn_on(pins[0]);
        turn_on(pins[6]);
        turn_on(pins[5]);
      }
      else if(num == 4)
      {
        turn_on(pins[1]);
        turn_on(pins[0]);
        turn_on(pins[3]);
        turn_on(pins[6]);
      }
      else if(num == 5)
      {
        turn_on(pins[2]);
        turn_on(pins[1]);
        turn_on(pins[0]);
        turn_on(pins[6]);
        turn_on(pins[5]);
      }
      else if(num == 6)
      {
        turn_on(pins[2]);
        turn_on(pins[1]);
        turn_on(pins[0]);
        turn_on(pins[6]);
        turn_on(pins[4]);
        turn_on(pins[5]);
      }
      else if(num == 7)
      {
        turn_on(pins[2]);
        turn_on(pins[3]);
      turn_on(pins[6]);
      }
      else if(num == 8)
        for(int j = 0; j<7; j++)
          turn_on(pins[j]);
      else if(num == 9)
      {
        turn_on(pins[2]);
        turn_on(pins[3]);
        turn_on(pins[1]);
        turn_on(pins[0]);
        turn_on(pins[6]);
        turn_on(pins[5]);
      }
      else
        for(int j = 0; j<7; j++)
          turn_off(pins[j]);
    }

    #pragma region funcs
    void turn_on(int pin)
    {
      pinMode(pin,OUTPUT);
      if(!this->cathode)
        digitalWrite(pin,LOW);
      else if(this->cathode)
        digitalWrite(pin,HIGH);
    }
    void turn_off(int pin)
    {
      pinMode(pin,INPUT);

    }
    #pragma endregion funcs
  ////////////////////////////////////////////////////////////////
  public:
    //true for anode
    //false for cathode
    digit_controller(int* pins,int power_pin, bool anode = true)
    {
      this->cathode = anode == true ? false : true;
      this->pins = pins;
      pinMode(power_pin,OUTPUT);
      analogWrite(power_pin,1);

    }
    ~digit_controller()
    {
      for(int j = 0; j < 8; j++)
        turn_off(pins[j]);
    }

    void digit_print(int num)
    {
      this->print_number((int)num);

    }
    void clear()
    {
      for(int j = 0; j<7; j++)
        turn_off(pins[j]);
    }
    
    void array_print(int *arr, int array_length, int print_delay = 1000)
    {
      

      for(int j = 0; j < array_length; j++)
      {
          digit_print((int)arr[j]);
          delay(print_delay);
          this->clear();
      }
        
    }
};
