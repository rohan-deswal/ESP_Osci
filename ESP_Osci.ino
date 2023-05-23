// #include"drawing_functions.h"
#define xVar 35
#define yVar 34
#define sW 32
#define maxDac 255

int dac_pin[8] = {32,33,25,26,27,14,12,13};
int dac2_pin[8] = {19,18,5,17,16,4,2,15};

class Box
{
  
  private:
    int xvel, yvel, xd, yd, gravity;
  public: 
    int x,y,w,h;
  Box(int x_, int y_, int w_, int h_)
  {
    x = x_;
    y = y_;
    w = w_;
    h = h_;

    xvel = 3, yvel = 3, gravity = -1;
    xd = 1, yd = 1;
  }

  void show()
  {
    // drawRectangle(x,y,w,h);
  }
  
  void update(int xd_, int yd_)
  {
    xd = xd_;
    yd = yd_;
    if (x + w + xvel*xd > maxDac || x + xvel*xd < 0)
    {
      xd = -xd;
    }
    if (y + h + yvel*yd > maxDac || y + yvel*yd < 0)
    {
      yd = -yd;
    }
    x += xvel*xd;
    y += yvel*yd;
  }

};
Box box(128,128,50,50);
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<8;i++)
  {
    pinMode(dac_pin[i], OUTPUT);
    pinMode(dac2_pin[i], OUTPUT);
  }
  
  Serial.begin(115200);
}


void loop() {

  // clear(); 
  if(analogRead(xVar) < 100)
    box.update(1,0);
  else if(analogRead(xVar) > 3000)
    box.update(-1,0);

  if(analogRead(yVar) < 100)
    box.update(0,1);
  else if(analogRead(yVar) > 3000)
    box.update(0,-1);

  // drawRectangle(0,0,255,255);
  box.update(0,0);
  box.show();

  // drawline(1,1,255,255);
  delayMicroseconds(50);

}
