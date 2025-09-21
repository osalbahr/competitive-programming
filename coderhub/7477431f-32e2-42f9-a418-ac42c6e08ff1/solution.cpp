#include <iostream>
using namespace std;

string get_saudi_traditional_dance(string region) { 
    if (region == "الشمالية") {
        return "الدحة";
    }

    if (region == "الشرقية") {
        return "الفجري";
    }

    if (region == "الوسطى") {
        return "العرضة النجدية";
    }

    if (region == "الجنوبية") {
        return "الخطوة الجنوبية";
    }

    return "لعبة غير معروفة";
}
