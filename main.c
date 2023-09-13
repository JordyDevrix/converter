#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

#define ESC 120

//calculatie van studs naar meters
float naarmeter(float meter)
{
    meter = meter * 0.28;
    return meter;
}

//calculatie van meters naar studs
float naarstud(float stud)
{
    stud = stud / 0.28;
    return stud;
}

//calculatie van millimeters naar studs
float delen(float deel)
{
    deel = deel / 1000;
    return deel;
}

int main()
{
    system("cls");
    float invoer;
    float response;
    int keuze;
    char key = 0;

//startscherm
    printf("Voer het nummer in om door te gaan.\n1 = studs naar meters.\n2 = meters naar studs.\n3 = millimeters naar studs\n");
    fflush(stdout);

while(key != ESC)
{
    scanf("%d", &keuze);

//keuze menu: kiezen tussen A of B
switch (keuze)
{
case 1:
    system("cls");
    printf("Voer het aantal studs in\n");
    scanf("%f", &invoer);
    response = naarmeter(invoer);
    printf("%0.4f meter", response);
    break;

case 2:
    system("cls");
    printf("Voer het aantal meters in\n");
    scanf("%f", &invoer);
    response = naarstud(invoer);
    printf("%0.4f studs", response);
    break;

case 3:
    system("cls");
    printf("Voer het aantal millimeters in\n");
    scanf("%f", &invoer);
    response = naarstud(delen(invoer));
    printf("%f studs", response);
    break;

default:
    system("cls");
    printf("Dit is geen optie.\n");
    scanf("%c", &key);
    break;
}
printf("\n\ndruk een willekeurige toets om door te gaan\n");
getch();
return main();
sleep(1);
}
}


