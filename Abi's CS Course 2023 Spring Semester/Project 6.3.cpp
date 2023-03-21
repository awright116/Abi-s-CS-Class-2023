#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


void HtmlSVG(int width, int height, const char* href)
{
    printf("<svg width = '%d' height = '%d'> <image href = '%s' height = '%d' width = '%d' / > < /svg>\n",
        width, height, href, height, width);
}

void star(int height, int width, int x, int y) // function definition
{
    const char* starShape =
        "<svg height='%dpx' width='%dpx'>"
        "x=%d y=%d"
        "<polygon points='100,10 40,198 190,78 10,78 160,198'"
        "style='fill:pink;stroke:hotpink;stroke-width:5;fill-rule:nonzero;' />"
        "</svg>";
 
    printf(starShape, height, width, x, y);
}


void beginHtmlSVG(int wide, int high, char* backColor)
{
    printf("<!DOCTYPE html>\n");
    printf("<html>\n");
    printf("<body>\n");

    printf("<svg height='%d' width='%d' style='stroke-width: 0px; background-color: %s;'>\n",
        high, wide, backColor);
}

void endHtmlSVG()

{
    printf("</svg>\n");
    printf("</body>\n");
    printf("</html>\n");
}


char* getRGBColor(int red, int green, int blue)
{
    const char* svgFillString = "rgb(%d, %d, %d)";
    char result[100] = { 0 };
    sprintf(result, svgFillString, red, green, blue);
    return result;
}


int main()
{
    HtmlSVG(500, 500, "https://t4.ftcdn.net/jpg/05/23/25/53/360_F_523255334_f68Qs39Fz9wXlZCyXHa8DnuaGzKgATCp.jpg");

    srand(time(NULL));
    beginHtmlSVG(1000, 1000, getRGBColor(245, 245, 220));

    int x = (rand() % 300) + 200 + 900;
    int y = (rand() % 300) + 100 + 55;
    int size = (rand() % 150) + 10 - 300;
    int red = rand() % 255;
    int blue = rand() % 255;
    int green = rand() % 255;
    int i = 0;

    /*HtmlSVG(10, 10, "https://t4.ftcdn.net/jpg/05/23/25/53/360_F_523255334_f68Qs39Fz9wXlZCyXHa8DnuaGzKgATCp.jpg")*/

    star(210, 500, 310, 400 );
 
    endHtmlSVG();

    return 0;
}