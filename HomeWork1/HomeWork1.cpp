#include <iostream>

void trapezoid_area() {
    double b1{}, b2{}, h{}; //создаем переменные
    std::cout << "Enter three numbers: b1, b2, h" << std::endl; //выводим на экран сообщение
    std::cin >> b1 >> b2 >> h; //считаваем переменные
    
    double area = ((b1 + b2) / 2) * h; //вычисляем площадь
    std::cout << "Trapezoid area = " << area << std::endl; //выводим ответ
}

void circle_area_and_length() {
    double r{};
    std::cout << "Enter the radious of the circle: " << std::endl; //выводим на экран сообщение
    std::cin >> r;
    std::cout << "Area = " << r * r * 3.14159265 << std::endl;
    std::cout << "Length = " << 2 * 3.14159265 * r << std::endl;
}

void right_triangle_area() {
    double a{}, b{};
    std::cout << "Enter the cathets: " << std::endl; //выводим на экран сообщение
    std::cin >> a >> b;
    std::cout << "Area = " << a*b*0.5 << std::endl;
    std::cout << "Hypotenuse = " << sqrt(a*a + b*b) << std::endl;
}

void sum_of_four_digit_num() {
    int num;
    std::cout << "Enter the num: ";
    std::cin >> num;
    int r1 = num / 1000 % 10; //цифра 1-го разряда
    int r2 = num / 100 % 10; //цифра 2-го разряда
    int r3 = num / 10 % 10; //цифра 3-го разряда
    int r4 = num % 10; //цифра 4-го разряда
    std::cout << "Sum = " << r1 + r2 + r3 + r4 << std::endl;
}

void toPolar() {
    double x{}, y{}, radius{}, angle{};
    std::cout << "Enter x and y " << std::endl;
    std::cin >> x >> y;
    radius = sqrt(x * x + y * y); //вычисляем радиус
    angle = atan2(y, x); //вычисляем угол в радианах

    std::cout << "Polar coordinates: " << radius << " " << angle << std::endl;
}

void toDekart() {
    double radius{}, angle{}, x{}, y{};
    std::cout << "Enter radius and angle" << std::endl;
    std::cin >> radius >> angle;
    
    x = radius * cos(angle);
    y = radius * sin(angle);

    std::cout << "Dekart coordinates: " << x << " " << y << std::endl;
}

void roots_of_quadratic_equation() {
    double a{}, b{}, c{};
    std::cout << "Enter a b c" << std::endl;
    std::cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if ( d > 0) {
        std::cout << "x1 = " << (-b + sqrt(d)) / 2 << std::endl;
        std::cout << "x2 = " << (-b - sqrt(d)) / 2 << std::endl;
    }
    else if (d == 0) {
        std::cout << "x = " << (-b) / 2;
    }
    else {
        std::cout << "ERROR: no solutions" << std::endl;
    } 
}

void find_medians() {
    double a{}, b{}, c{}, ma{}, mb{}, mc{};
    std::cout << "Enter sides of the triangle: " << std::endl;
    std::cin >> a >> b >> c;
    ma = 0.5 * std::sqrt(2 * b * b + 2 * c * c - a * a); //медиана на сторону а
    mb = 0.5 * std::sqrt(2 * a * a + 2 * c * c - b * b); //медиана на сторону b
    mc = 0.5 * std::sqrt(2 * a * a + 2 * b * b - c * c); //медиана на сторону c
    std::cout << "Medians (sides a,b,c): " << ma << " " << mb << " " << mc << std::endl;
}

void find_hours_and_minutes() {
    int seconds{}, hours{}, minutes{};
    std::cout << "Enter count seconds: " << std::endl;
    std::cin >> seconds;
    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60;
    std::cout << "Hours: " << hours << " minutes: " << minutes << std::endl;
}

void is_isocles_triangle() {
    int a{}, b{}, c{};
    std::cout << "Enter sides of the triangle: (a,b,c)" << std::endl;
    std::cin >> a >> b >> c;
    if (a == b || a == c || b == c) {
        std::cout << "YES  (isocles)" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
}

void purchase_price() {
    double sum{};
    std::cout << "Enter sum: " << std::endl;

    std::cin >> sum;

    if (sum > 1000) {
        std::cout << "Total amount: " << sum * 0.9 << ", your discount: " << sum*0.1<<std::endl;
    }
    else {
        std::cout << "Total amount: " << sum << std::endl;
    }
}

void ideal_weight() {
    double weight{}, height{};
    std::cout << "Enter your weight and height" << std::endl;
    std::cin >> weight >> height;
    double ideal_weight = height - 100;
    if (weight > ideal_weight) {
        std::cout << "Lose weight" << std::endl;
    }
    else {
        std::cout << "Get weight" << std::endl;
    }
}

void random_number() {
    srand(time(0)); //инициализируем генератор случайных чисел
    int n;
    std::cout << "Enter your number: " << std::endl;
    std::cin >> n;
    int random_num = rand()%9  + 1; //генерируем число в нужном интервале
    if (random_num == n) {
        std::cout << "You win" << std::endl;
    }
    else {
        std::cout << "You lose, random_num = " << random_num << std::endl;
    }
}

void cost_of_negotiations() {
    double t{}, day{};
    std::cout << "Длительность разговора: ";
    std::cin >> t; 
    std::cout << "День недели: ";
    std::cin >> day;
    if (day == 6 || day == 7) {
        std::cout << "You give discount 20%. Pay = " << t * 0.8 << std::endl;
    } else {
        std::cout << "Pay = " << t << std::endl;
    }
}

void name_of_month() {
    int n{}; //номер месяца
    std::cout << "Введите номер месяца: ";
    std::cin >> n; 
    switch (n) {
    case 1:
        std::cout << "Январь " << " Зима" << std::endl;
        break;
    case 2:
        std::cout << "Февраль " << " Зима" << std::endl;
        break;
    case 3:
        std::cout << "Март " << " Весна" << std::endl;
        break;
    case 4:
        std::cout << "Апрель " << " Весна" << std::endl;
        break;
    case 5:
        std::cout << "Май " << " Весна" << std::endl;
        break;
    case 6:
        std::cout << "Июнь " << " Лето" << std::endl;
        break;
    case 7:
        std::cout << "Июль " << " Лето" << std::endl;
        break;
    case 8:
        std::cout << "Август " << " Лето" << std::endl;
        break;
    case 9:
        std::cout << "Сентябрь " << " Осень" << std::endl;
        break;
    case 10:
        std::cout << "Октябрь " << " Осень" << std::endl;
        break;
    case 11:
        std::cout << "Ноябрь " << " Осень" << std::endl;
        break;
    case 12:
        std::cout << "Декабрь " << " Зима" << std::endl; 
        break;
    default:
        std::cout << "ERROR" << std::endl;
    }
}

void is_num_happy() {
    int n{};
    std::cout << "Enter the number: ";
    std::cin >> n;

    int r1 = n / 100000 % 10;
    int r2 = n / 10000 % 10;
    int r3 = n / 1000 % 10;
    int r4 = n / 100 % 10;
    int r5 = n / 10 % 10;
    int r6 = n % 10;
    if (r1 + r2 + r3 == r4 + r5 + r6) {
        std::cout << "YES, happy" << std::endl;
    }
    else {
        std::cout << "No, unhappy" <<std::endl;
    }
}

void kopeyka() {
    int number{};
    std::cout << "Введите количество копееек: ";
    std::cin >> number;
    if (number % 10 == 1 && number != 11) {
        std::cout << number << " копейка" << std::endl;
    }
    else if ((number % 10 >= 2 && number % 10 <= 4) && !(number >= 12 && number <= 14)) {
        std::cout << number << " копейки" << std::endl;
    }
    else {
        std::cout << number << " копеек" << std::endl;
    }
}

void is_palindrom() {
    int num{};
    std::cout << "Enter the number ";
    std::cin >> num;
    //первое равно последнему, второе равно предпоследнему
    if (num / 1000 % 10 == num % 10 && num / 100 % 10 == num/10% 10) {
        std::cout << "palindrom" << std::endl;
    }
    else {
        std::cout << "No, is not palinrom" << std::endl;
    }  
}

void work_with_three_digital_num() {
    int num{}, b{};
    std::cout << "Введите трехзначное число: ";
    std::cin >> num;
    std::cout << "Введите b: ";
    std::cin >> b;
    int r1 = num / 100 % 10; //разряды
    int r2 = num / 10 % 10;
    int r3 = num % 10;
    if (r1 * r2 * r3 > b) {
        std::cout << "Произведение больше, чем b" << std::endl;
    }
    else {
        std::cout << "Произведение меньше, чем b" << std::endl;
    }

    if ((r1 + r2 + r3) % 7 == 0) {
        std::cout << "Сумма чисел делится на 7" << std::endl;
    }
    else {
        std::cout << "Сумма чисел не делится на 7" << std::endl;
    }
}

void enter_rectangle() {
    double a, b, c, d;
    std::cout << "Введите стороны: ";
    std::cin >> a >> b >> c >> d;
    if ((a <= c && b <= d) || (a <= d && b <= c)) {
        std::cout << "Прямоугольник можно вложить." << std::endl;
    }
    else {
        std::cout << "Прямоугольник нельзя вложить." << std::endl;
    }
}

void size_of_type() {
    std::cout <<"char: " << sizeof(char) << " байт" << std::endl;
    std::cout <<"int: " << sizeof(int) << " байт" << std::endl;
    std::cout << "float: "<< sizeof(float) << " байт" << std::endl;
    std::cout <<"double: " << sizeof(double) << " байт" << std::endl;
    std::cout <<"long: "<< sizeof(long) << " байт" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " байт" << std::endl;
    std::cout <<"short: " << sizeof(short) << " байт" << std::endl;
    std::cout << "bool: " << sizeof(bool) << " байт" << std::endl;
}
int main()
{
    /*Task 1*/
    trapezoid_area();

    /*Task 2*/
    circle_area_and_length();

    /*Task 3*/
    right_triangle_area();
    
    /*Task 4*/
    sum_of_four_digit_num();

    /*Task 5*/
    toPolar();

    /*Task 6*/
    toDekart();

    /*Task 7*/
    roots_of_quadratic_equation();

    /*Task 8*/
    find_medians();

    /*Task 9*/
    find_hours_and_minutes();

    /*Task 10*/
    is_isocles_triangle();

    /*Task 11*/
    purchase_price();

    /*Task 12*/
    ideal_weight();

    /*Task 13*/
    random_number();

    /*Task 14*/
    cost_of_negotiations();

    /*Task 15*/
    name_of_month();

    /*Task 16*/
    is_num_happy();
    
    /*Task 17*/
    kopeyka();

    /*Task 18*/
    is_palindrom();

    /*Task 19*/
    work_with_three_digital_num();

    /*Task 20*/
    enter_rectangle();

    /*Task 21*/
    size_of_type();
}

