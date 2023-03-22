#include "calc.h"  //فراخوانی کتابخانه calc
calc m;   //ایجاد یک نمونه شی از کتابخانه به نام m
void setup() {
  Serial.begin(9600);
  Serial.print("SUM OF THE 5 AND 6 IS: ");
  Serial.flush();
  Serial.println(m.sum(5, 6)); //فراخوانی تابع(متد) جمع 
  Serial.flush();
  //****************************************************
  Serial.print("DIFFERENCE BETWEEN THE 5 AND 6 IS: ");
  Serial.flush();
  Serial.println(m.diff(5, 6));  //فراخوانی تابع(متد) تفریق
  Serial.flush();
  //****************************************************
  Serial.print("MULTIPLE OF THE 5 AND 6 IS: ");
  Serial.flush();
  Serial.println(m.mul(5, 6));  //فراخوانی تابع(متد) ضرب
  Serial.flush();
  //****************************************************
  Serial.print("DIVISION OF THE 5 AND 6 IS: ");
  Serial.print(m.div(5, 6));   //فراخوانی تابع(متد) تقسیم
  Serial.flush();
  //****************************************************
}

void loop() {
}
