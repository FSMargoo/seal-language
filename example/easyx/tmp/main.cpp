#include "std_.hpp"
const auto width = 640;
const auto height = 480;
const auto half_width = width/2;
const auto half_height = height/2;
const auto display = 3;
const auto arrow = 5;
const auto copies = 600;
const auto seconds = 5;



auto draw_coordinate_axis()
{
setlinecolor(DARKGRAY);
line(width/2,height/10,width/2,height/10*9);
line(width/2,height/10,width/2+arrow,height/10+arrow);
line(width/2,height/10,width/2-arrow,height/10+arrow);
line(width/5,height/2,width/5*4,height/2);
line(width/5*4,height/2,width/5*4-arrow,height/2-arrow);
line(width/5*4,height/2,width/5*4-arrow,height/2+arrow);
}
int main()
{
initgraph(width,height);
auto radius = std_::min(width,height)/9;
auto last_x = width/2.0f;
auto last_y = height/2.0f-radius;
BeginBatchDraw();
setlinecolor(BLUE);
circle(half_width,half_height,radius);
draw_coordinate_axis();
setrop2(R2_XORPEN);
double a = 0;
while (true)
{
auto x = std_::math.cos(3.0f/2.0f*std_::math.pi+a)*2*radius+half_width;
auto y = std_::math.sin(3.0f/2.0f*std_::math.pi+a)*2*radius+half_height;
auto fixed_point_x = std_::math.cos(std_::math.pi/2.0f+a*2)*radius+x;
auto fixed_point_y = std_::math.sin(std_::math.pi/2.0f+a*2)*radius+y;
auto contact_x = std_::math.cos(std_::math.pi/2.0f+a)*radius+x;
auto contact_y = std_::math.cos(std_::math.pi/2.0f+a)*radius+y;
setrop2(R2_COPYPEN);
setlinecolor(YELLOW);
line(last_x,last_y,fixed_point_x,fixed_point_y);
setrop2(R2_XORPEN);

            last_x = fixed_point_x;
            last_y = fixed_point_y;
            
            setfillcolor(GREEN);
            solidcircle(contact_x, contact_y, display);
            setfillcolor(LIGHTRED);
            solidcircle(last_x, last_y, display);

            setlinecolor(BLUE);
            circle(x, y, radius);

            FlushBatchDraw();
            Sleep((double)(1000 * seconds) / (double)copies + 0.5);

            setlinecolor(BLUE);
            circle(x, y, radius);

            setfillcolor(GREEN);
            solidcircle(contact_x, contact_y, display);

            setfillcolor(LIGHTRED);
            solidcircle(last_x, last_y, display);
        ;
a+=std_::math.pi/copies*2;
}
return 0;
}
