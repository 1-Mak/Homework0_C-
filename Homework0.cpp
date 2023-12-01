
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <map>


const double PI = 3.141592653589793;

double area_of_trapezoid()
{
    double a;
    double b;
    double h;
    std::cout << "Input first trapezoid base: ";
    std::cin >> a;
    std::cout << "Input second trapezoid base: ";
    std::cin >> b;
    std::cout << "Input trapezoid height: ";
    std::cin >> h;
	return (a + b) * h / 2;
}   
std::pair <double, double> area_and_length_of_circle()
{
    double r;
    std::cout << "Input radius of circle: ";
    std::cin >> r;
	return std::pair<double, double>(PI * pow(r, 2), 2 * PI * r);
}

std::pair <double, double> triangle()
{
    double a;
    double b;
    std::cout << "Input first leg: ";
    std::cin >> a;
    std::cout << "Input second leg: ";
    std::cin >> b;
	return std::pair<double, double>(a * b / 2, sqrt(a * a + b * b));
}

int summ_of_numbers()
{
    int a;
    std::cout << "Input num: ";
    std::cin >> a;
	return a / 1000 + a / 100 % 10 + a / 10 % 10 + a % 10;
}
std::pair <double, double> to_polar()
{
    double x;
    double y;
    std::cout << "Input X coordinate: ";
    std::cin >> x;
    std::cout << "Input Y coordinate: ";
    std::cin >> y;
	return std::pair<double, double>(sqrt(x * x + y * y), atan(y / x));
}

std::pair <double, double> to_decart()
{
    double ro;
    double fi;
    std::cout << "Input PO coordinate: ";
    std::cin >> ro;
    std::cout << "Input FI coordinate: ";
    std::cin >> fi;
    return std::pair<double, double>(ro*cos(fi), ro*sin(fi));
}

void quadratic_equation()
{

    double a;
    double b; 
    double c;
    std::cout << "Input first coef: ";
    std::cin >> a;
    std::cout << "Input second coef: ";
    std::cin >> b;
    std::cout << "Input third coef: ";
    std::cin >> c;
    double D = b * b - 4 * a * c;
    if (D > 0) {
        std::cout << "X1: " << (-b - sqrt(D)) / 2 * a << " X2: " << -b + sqrt(D) / 2 * a << std::endl;
    }
    if (D == 0) {
        std::cout << "X: " << - b / 2 * a << std::endl;
    }
    if (D < 0) {
        std::cout << "no answer" << std::endl;
    }
}

void median() {
    double a;
    double b;
    double c;
    std::cout << "Input first side: ";
    std::cin >> a;
    std::cout << "Input second side: ";
    std::cin >> b;
    std::cout << "Input third side: ";
    std::cin >> c;
    double meda = (b * b + c * c) / 2 - a * a / 4;
    double medb = (a * a + c * c) / 2 - b * b / 4;
    double medc = (a * a + b * b) / 2 - c * c / 4;
    double medmeda = (medb * medb + medc * medc) / 2 - meda * meda / 4;
    double medmedb = (meda * meda + medc * medc) / 2 - medb * medb / 4;
    double medmedc = (meda * meda + medb * medb) / 2 - medc * medc / 4;
    std::cout << "First side: " << medmeda << " Second side: " << medmedb << " Third side: " << medmedc << std::endl;
}

void time() {
    int sec;
    std::cout << "Input number of seconds: ";
    std::cin >> sec;
    int min = sec / 60;
    int hour = min / 60;
    int realmin = min - 60 * hour;
    std::cout << hour << " hours " << realmin << " mins" << std::endl;
    std::cout << min << " mins" << std::endl;
}

void triangle2() {
    double a;
    double b;
    double c;
    std::cout << "Input first side: ";
    std::cin >> a;
    std::cout << "Input second side: ";
    std::cin >> b;
    std::cout << "Input third side: ";
    std::cin >> c;
    if (a == b || a == c ||  b == c) std::cout << "ravnobedrenniy" << std::endl;
    else std::cout << "ne ravnobedrenniy" << std::endl;
}

void purchase() {
    int rub;
    std::cout << "Input rubles: ";
    std::cin >> rub;
    if (rub > 1000) std::cout << rub * 0.9 << " rub" << std::endl;
    else std::cout << rub << " rub" << std::endl;
}
void advice()
{
    double weight;
    double height;
    std::cout << "Input your weight: ";
    std::cin >> weight;
    std::cout << "Input your height: ";
    std::cin >> height;
    double ideal_weight = height - 100;
    if (ideal_weight < weight) std::cout << "You need to lose some kilos" << std::endl;
    if (ideal_weight == weight) std::cout << "You are cool" << std::endl;
    if (ideal_weight > weight) std::cout << "You need to gain some kilos" << std::endl;
}


void random()
{
    std::srand(time(NULL));
    int rand1 = std::rand()%9 + 1;
    int rand2 = std::rand()%9 + 1;
    std::cout << rand1 << " " << rand2 << std::endl;
    double num;
    std::cout << "Input your num: ";
    std::cin >> num;
    if (rand1 * rand2 == num) std::cout << "You completely right" << std::endl;
    else std::cout << "Try again" << std::endl;
}
void call_price()
{
    int day;
    int time;
    std::cout << "Input time: ";
    std::cin >> time;
    std::cout << "Input day: ";
    std::cin >> day;
    if (day == 6 or day == 7) std::cout << time * 0.8 << " rub" << std::endl;
    else std::cout << time << " rub" << std::endl;
}
void month()
{
    int month;
    std::cout << "Input month number: ";
    std::cin >> month;
    std::map<int, std::string> months;
    months[1] = "january, winter";
    months[2] = "february, winter";
    months[3] = "march, spring";
    months[4] = "april, spring";
    months[5] = "may, spring";
    months[6] = "june, summer";
    months[7] = "july, summer";
    months[8] = "august, summer";
    months[9] = "september, autumn";
    months[10] = "october, autumn";
    months[11] = "november, autumn";
    months[12] = "december, winter";
    std::cout << months[month] << std::endl;

}
void ticket() {
    int count = 0;
    int ticket;
    std::cout << "Enter ticket number: ";
    std::cin >> ticket;
    int part1 = ticket / 1000;
    int part2 = ticket % 1000;
    int summ1 = 0;
    while (part1 > 0) {
        summ1 += part1 % 10;
        part1 /= 10;
    }
    int summ2 = 0;
    while (part2 > 0) {
        summ2 += part2 % 10;
        part2 /= 10;
    }
    if (summ1 == summ2) std::cout << "Lucky!!!" << std::endl;
    else std::cout << "Unlucky bro" << std::endl;
}

void cents() {
    int cents;
    std::cout << "Enter number of kopeyek: ";
    std::cin >> cents;
    std::map<int, std::string> dict;
    dict[1] = "Kopeyka";
    dict[2] = "Kopeyki";
    dict[3] = "Kopeyki";
    dict[4] = "Kopeyki";
    dict[5] = "Kopeyek";
    dict[6] = "Kopeyek";
    dict[7] = "Kopeyek";
    dict[8] = "Kopeyek";
    dict[9] = "Kopeyek";
    dict[0] = "Kopeyek";
    std::cout << cents << " " << dict[cents % 10] << std::endl;
}

void palyndrom() {
    int num;
    std::cout << "Enter number of 4: ";
    std::cin >> num;
    int num1 = num / 1000;
    int num2 = num / 100 % 10;
    int num3 = num / 10 % 10;
    int num4 = num % 10;
    if (num1 == num4 && num2 == num3) std::cout << "It is a palyndrom" << std::endl;
    else std::cout << "It is NOT a palyndrom" << std::endl;
}

void trexznach() {
    int num;
    std::cout << "Enter number of 3: ";
    std::cin >> num;
    int b;
    std::cout << "Enter number b: ";
    std::cin >> b;
    int num1 = num / 100;
    int num2 = num / 10 % 10;
    int num3 = num % 10;
    if (num1 * num2 * num3 > b) std::cout << "Mult > b" << std::endl;
    else std::cout << "Mult <= b" << std::endl;
    if ((num1 + num2 + num3) % 7 == 0) std::cout << "is %7" << std::endl;
    else std::cout << "not %7" << std::endl;
}

void square() {
    double a;
    double b;
    double c;
    double d;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    std::cout << "Enter d: ";
    std::cin >> d;

    double max1;
    double max2;
    double min1;
    double min2;

    if (a < b) {
        max1 = b;
        min1 = a;
    }
    else {
        max1 = a;
        min1 = b;
    }

    if (c < d) {
        max2 = d;
        min2 = c;
    }
    else {
        max2 = c;
        min2 = d;
    }
    if (max1 < max2 && min1 < min2) std::cout << "mozhno" << std::endl;
    else std::cout << "ne mozhno" << std::endl;

}
void Task21(){
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte" << std::endl;


}


int main()
{
    std::cout << "Task 1" << std::endl;
    std::cout << "Area: " << area_of_trapezoid() << std::endl;
    std::cout << "Task 2" << std::endl;
    auto a = area_and_length_of_circle();
    std::cout << "Area: " << a.first << " Length: " << a.second << std::endl;
    std::cout << "Task 3" << std::endl;
    auto b = triangle();
    std::cout << "Area: " << b.first << " Hypotenuse: " << b.second << std::endl;
    std::cout << "Task 4" << std::endl;
    std::cout << "Summ of numbers: " << summ_of_numbers() << std::endl;
    std::cout << "Task 5" << std::endl;
    auto c = to_polar();
    std::cout << "po: " << c.first << " fi: " << c.second << std::endl;
    std::cout << "Task 6" << std::endl;
    auto d = to_decart();
    std::cout << "X: " << d.first << " Y: " << d.second << std::endl;
    std::cout << "Task 7" << std::endl;
    quadratic_equation();
    std::cout << "Task 8" << std::endl;
    median();
    std::cout << "Task 9" << std::endl;
    time();
    std::cout << "Task 10" << std::endl;
    triangle2();
    std::cout << "Task 11" << std::endl;
    purchase();
    std::cout << "Task 12" << std::endl;
    advice();
    std::cout << "Task 13" << std::endl;
    random();
    std::cout << "Task 14" << std::endl;
    call_price();
    std::cout << "Task 15" << std::endl;
    month();
    std::cout << "Task 16" << std::endl;
    ticket();
    std::cout << "Task 17" << std::endl;
    cents();
    std::cout << "Task 18" << std::endl;
    palyndrom();
    std::cout << "Task 19" << std::endl;
    trexznach();
    std::cout << "Task 20" << std::endl;
    square();
    std::cout << "Task 21" << std::endl;
    Task21();
   // Из результат программы видно, что разница в размерах данных достаточно большая (может зависеть от платформы), поэтому важно учитывать их при написании программы.

}

