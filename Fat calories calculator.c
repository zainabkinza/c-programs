//Zainab Kinza Sheikh  (CT-059)

#include <stdio.h>
int main(void)
{
    int calfromfood, fatgrams, calfromfat;
    float percentcalfromfat;
    
    printf("Enter the number of calories in your food: ");
    scanf("%d", &calfromfood);
    printf("Enter the grams of fat in your food: ");
    scanf("%d", &fatgrams);
    
    calfromfat = fatgrams * 9;

    if (calfromfood < 0 || fatgrams < 0 || calfromfat > calfromfood) {
        printf("Either the calories or fat grams were incorrectly entered\n");
        return 0;
    }

    percentcalfromfat = (calfromfat * 100.0) / calfromfood;
    
    printf("Percentage calories from fat = %f%%\n", percentcalfromfat);
    
    if (percentcalfromfat < 30.0) {
        printf("Your food is low in fat\n");
    }
    
    return 0;
}
