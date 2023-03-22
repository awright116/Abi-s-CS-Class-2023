#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>

using namespace std;


void HtmlSVG(int width, int height, const char* href)
{
    printf("<svg width = '%d' height = '%d'> <image href = '%s' height = '%d' width = '%d' / > < /svg>\n",
        width, height, href, height, width);
}

int main()
{
    HtmlSVG(1000, 1000, "https://t4.ftcdn.net/jpg/05/23/25/53/360_F_523255334_f68Qs39Fz9wXlZCyXHa8DnuaGzKgATCp.jpg");
    // The first 1000 is width, the second 1000 is height, followed by the image 
    return 0;
}