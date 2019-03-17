// #include <iostream>
// #include <stdlib.h>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     int total_minutes, before_time, after_time,
//         minutes, day_amount;
//     cin >> before_time >> minutes;
//     total_minutes = (before_time/100 * 60) + minutes +
//                     (before_time % 100);
//     if (int(total_minutes/60) < 24) 
//     {
//         after_time = (total_minutes/60 * 100) + 
//                      (total_minutes % 60);
//     }
//     else
//     {
//         day_amount = int(total_minutes/60/24);
//         total_minutes = total_minutes - day_amount * 24 * 60;
//         after_time = total_minutes/60 * 100 + 
//                      (total_minutes % 60);
//     }
    
//     cout << after_time;
//     system("pause");
//     return 0;
// }



// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int before_number, after_number, ten, one;
//     cin >> before_number;
//     if (before_number >= 0 && before_number <= 153) 
//     {
//         ten = int(before_number/16);
//         one = before_number - ten * 16;
//         after_number = ten * 10 + one;
//         cout << after_number;
//     }
//     system("pause");
//     return 0;
// }



// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     cout << "------------------------------------" << endl;
//     cout << "Province      Area(km2)   Pop.(10K)" << endl;
//     cout << "------------------------------------" << endl;
//     cout << "Anhui         139600.00   6461.00" << endl;
//     cout << "Beijing        16410.54   1180.70" << endl;
//     cout << "Chongqing      82400.00   3144.23" << endl;
//     cout << "Shanghai        6340.50   1360.26" << endl;
//     cout << "Zhejiang      101800.00   4894.00" << endl;
//     cout << "------------------------------------" << endl;
//     system("pause");
//     return 0;
// }


// #include <iostream>
// #include <stdlib.h>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     float float_one, float_two;
//     int integer;
//     char string;
//     cin >> float_one >> integer >> string >> float_two;
//     cout << setiosflags(ios::fixed);
//     cout << string << " "
//          << integer << " "
//          << setprecision(2) << float_one << " "
//          << setprecision(2) << float_two;
//     system("pause");
//     return 0;
// }


// #include <iostream>
// #include <stdlib.h>
// #include <string>
// using namespace std;
// int main()
// {
//     int hour, min;
//     char sign;
//     string morning = " AM", afternoon = " PM";
//     cin >> hour >> sign >> min;
//     // ???noskipws(????????in???)???????????????
//     if(hour >= 12 && hour < 24 && min >= 0 && min < 60)
//     {
//         if(hour > 12)
//         {
//             hour = hour - 12;
//             cout << hour << sign << min << afternoon;
//         }
//         else
//         {
//             cout << hour << sign << min << afternoon;
//         }
//     }
//     else if(hour >= 0 && hour < 12 && min >= 0 && min < 60)
//     {
//         cout << hour << sign << min << morning;   
//     }
//     else
//     {
//         cout << "WRONG TIME !!!";
//     }
//     system("pause");
//     return 0;
// }


// #include <iostream>
// #include <stdlib.h>
// #include <iomanip>
// #include <math.h>
// int main()
// {
//     using namespace std;
//     int money, year;
//     double rate, interest;
//     cin >> money >> year >> rate;
//     interest = money * pow((1+rate), year) - money;
//     cout << setiosflags(ios::fixed);
//     cout << "interest = " << setprecision(2) << interest;
//     cout << endl;
//     system("pause");
//     return 0;
// }


// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int v;
//     cin >> v;
//     if(v >= 0 && v <= 500)
//     {
//         if(v > 60)
//         {
//             cout << "Speed: " << v << " - Speeding";
//         }
//         else
//         {
//             cout << "Speed: " << v << " - OK";
//         }
//     }
//     else
//     {
//         cout << "WRONG!!";
//     }
//     system("pause");
//     return 0;
// }


// #include <stdlib.h>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if(a > 0 && b > 0 && c > 0)
//     {
//         if(a == b)
//         {
//             cout << "C";
//         }
//         else
//         {
//             if(a == c)
//             {
//                 cout << "B";
//             }
//             else
//             {
//                 cout << "A";
//             }
//         }
//     }
//     system("pause");
//     return 0;
// }


// #include <iostream>
// #include <stdlib.h>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     int salary_ph_old = 50, salary_ph_new = 30,
//         work_year, week_work_time;
//     float week_salary;
//     cin >> work_year >> week_work_time;
//     if(work_year >= 5)
//     {
//         if(week_work_time >= 40)
//         {
//             week_salary = (salary_ph_old * 40) +
//                           (salary_ph_old * (week_work_time - 40) * 1.5);
//         }
//         else
//         {
//             week_salary = salary_ph_old * week_work_time;
//         }
        
//     }
//     else
//     {
//         if(week_work_time >= 40)
//         {
//             week_salary = (salary_ph_new * 40) +
//                           (salary_ph_new * (week_work_time - 40) * 1.5);
//         }
//         else
//         {
//             week_salary = salary_ph_new * week_work_time;
//         }
        
//     }
//     cout << setiosflags(ios::fixed);
//     cout << setprecision(2) << week_salary;
//     system("pause");
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char a[1];
//     // scanf("%s", &a);
//     a[0] = 'hello';
//     a[1] = 'e';
//     a[2] = 'l';
//     a[3] = 'l';
//     a[4] = 'o';
//     a[5] = 'w';
//     a[6] = '\0';
//     printf("%s", a);
//     system("pause");
//     return 0;
// }

//?????
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int count1(0), count2(0), count3(0), count4(0), count5(0);
//     srand((unsigned)time(NULL));
//     int color=rand()%6;
//     while(color)
//     {
//         switch (color)
//         {
//             case 1:
//                 cout << "red" << endl;
//                 count1++;
//                 break;
//             case 2:
//                 cout << "yellow" << endl;
//                 count2++;
//                 break;
//             case 3:
//                 cout << "blue" << endl;
//                 count3++;
//                 break;
//             case 4:
//                 cout << "green" << endl;
//                 count4++;
//                 break;
//             case 5:
//                 cout << "white" << endl;
//                 count5++;
//                 break;
//             default:
//             cout << "wrong" << endl;
//                 break;
//         }
//         color=rand()%6;
//     }
//     cout << "counts of balls(red, yellow, blue, green, white):"
//          << count1 << count2 << count3 << count4 << count5 << endl;
//     system("pause");
//     return 0;
// }


// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int space_number = 0, digital_number = 0, character_number = 0;
//     char c;
//     while((c = cin.get()) != 10)
//     {
//         if(c == ' ')
//         {
//             space_number++;
//         }
//         else if((c >= '0') && (c <= '9'))
//         {
//             digital_number++;
//         }
//         else if(((c >= 'a') && (c <= 'z'))||((c >= 'A') && (c <= 'Z')))
//         {
//             character_number++;
//         }
//     }
//     cout << "space_number:" << space_number << endl;
//     cout << "digital_number:" << digital_number << endl;
//     cout << "character_number:" << character_number << endl;
//     system("pause");
//     return 0;
// }

