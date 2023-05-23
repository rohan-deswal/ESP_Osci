
// #include "Arduino.h"
// #define maxDac 255

// int dac_pin[8] = {32,33,25,26,27,14,12,13};
// int dac2_pin[8] = {19,18,5,17,16,4,2,15};

// void dac_write(char val)
// {
//     if(val & 0b00000001)
//       digitalWrite(dac_pin[0], HIGH);
//     else digitalWrite(dac_pin[0],LOW);
//     if(val & 0b00000010)
//       digitalWrite(dac_pin[1], HIGH);
//     else digitalWrite(dac_pin[1],LOW);
//     if(val & 0b00000100)
//       digitalWrite(dac_pin[2], HIGH);
//     else digitalWrite(dac_pin[2],LOW);
//     if(val & 0b00001000)
//       digitalWrite(dac_pin[3], HIGH);
//     else digitalWrite(dac_pin[3],LOW);
//     if(val & 0b00010000)
//       digitalWrite(dac_pin[4], HIGH);
//     else digitalWrite(dac_pin[4],LOW);
//     if(val & 0b00100000)
//       digitalWrite(dac_pin[5], HIGH);
//     else digitalWrite(dac_pin[5],LOW);
//     if(val & 0b01000000)
//       digitalWrite(dac_pin[6], HIGH);
//     else digitalWrite(dac_pin[6],LOW);
//     if(val & 0b10000000)
//       digitalWrite(dac_pin[7], HIGH);
//     else digitalWrite(dac_pin[7],LOW);
// }
// void dac2_write(char val)
// {
//     if(val & 0b00000001)
//       digitalWrite(dac2_pin[0], HIGH);
//     else digitalWrite(dac2_pin[0],LOW);
//     if(val & 0b00000010)
//       digitalWrite(dac2_pin[1], HIGH);
//     else digitalWrite(dac2_pin[1],LOW);
//     if(val & 0b00000100)
//       digitalWrite(dac2_pin[2], HIGH);
//     else digitalWrite(dac2_pin[2],LOW);
//     if(val & 0b00001000)
//       digitalWrite(dac2_pin[3], HIGH);
//     else digitalWrite(dac2_pin[3],LOW);
//     if(val & 0b00010000)
//       digitalWrite(dac2_pin[4], HIGH);
//     else digitalWrite(dac2_pin[4],LOW);
//     if(val & 0b00100000)
//       digitalWrite(dac2_pin[5], HIGH);
//     else digitalWrite(dac2_pin[5],LOW);
//     if(val & 0b01000000)
//       digitalWrite(dac2_pin[6], HIGH);
//     else digitalWrite(dac2_pin[6],LOW);
//     if(val & 0b10000000)
//       digitalWrite(dac2_pin[7], HIGH);
//     else digitalWrite(dac2_pin[7],LOW);
// }

// void drawpixel(int x, int y)
// {

//   if(x > maxDac || y > maxDac || x < 0 || y < 0) return;

//   dac_write(x);
//   dac2_write(y);

// }
// void drawline(int x1, int y1, int x2, int y2)  
// {  
//   int step,i,x,y,dx,dy;
//   dx=abs(x2-x1);
//   dy=abs(y2-y1);
  
//   if(dx>=dy) step=dx;
//   else step=dy;
  
//   dx=dx/step;
//   dy=dy/step;
  
//   x=x1;
//   y=y1;
  
//   i=1;
//   while(i<=step)
//   {
//     drawpixel(x,y);
//     x=x+dx;
//     y=y+dy;
//     i=i+1;
//   }  
// }  
// void drawCircle_helper(int xc, int yc, int x, int y)
// {
//     drawpixel(xc+x, yc+y);
//     drawpixel(xc-x, yc+y);
//     drawpixel(xc+x, yc-y);
//     drawpixel(xc-x, yc-y);
//     drawpixel(xc+y, yc+x);
//     drawpixel(xc-y, yc+x);
//     drawpixel(xc+y, yc-x);
//     drawpixel(xc-y, yc-x);
// }
 
// void drawRectangle(int x0, int y0, int w, int h)
// {
//   drawline(x0,y0,x0+w,y0);
//   drawline(x0,y0+h,x0+w,y0+h);
  
//   drawline(x0+w,y0,x0+w,y0+h);
//   drawline(x0,y0,x0,y0+h);
// }
// void drawCircle(int xc, int yc, int r)
// {
//     int x = 0, y = r;
//     int d = 3 - 2 * r;
//     drawCircle_helper(xc, yc, x, y);
//     while (y >= x)
//     {

//         x++;
//         if (d > 0)
//         {
//             y--;
//             d = d + 4 * (x - y) + 10;
//         }
//         else
//             d = d + 4 * x + 6;
//         drawCircle_helper(xc, yc, x, y);
//     }
// }
// void clear()
// {
//   drawpixel(0,0);
// }
