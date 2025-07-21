#include <stdio.h>

int main() {
// ประกาศตัวแปรชื่อ เป็นข้อความ (string)
char name[] = "Chinnawon";

// ประกาศตัวแปรอายุ เป็นจำนวนเต็ม
int age =18;

// ประกาศตัวแปรน้ำหนัก เป็นเลขทศนิยม
float weight = 63;

// แสดงผลบรรทัดที่ 1
printf("Student %s is %d years old.\n", name, age);

// แสดงผลบรรทัดที่ 2
printf("His weighs is %.1f kg.\n", weight);

return 0;
}