#include <stdio.h>
#include <math.h>

int main() {
    int choice, temp_choice;
    int calc_pressure_altitude = 0, calc_tas = 0, calc_ground_speed = 0, calc_range = 0;
    int calc_takeoff = 0, calc_wing_loading = 0, calc_rate_of_climb = 0;
    int calc_no_return = 0, calc_descent_speed = 0;

    double wind_angle, wind_speed, fuel, consumption, wing_surface;
    double pressure, temperature, altitude, ias, weight;
    double headwind, pressure_altitude, tas, ground_speed, range;
    double takeoff, wing_loading, rate_of_climb, no_return, descent_speed;

   
    printf("Menu des données à calculer :\n");
    printf("1. Altitude-pression\n");
    printf("2. Vitesse vraie (True Airspeed)\n");
    printf("3. Vitesse-sol\n");
    printf("4. Distance franchissable\n");
    printf("5. Distance de décollage\n");
    printf("6. Charge alaire\n");
    printf("7. Taux de montée\n");
    printf("8. Point de non-retour\n");
    printf("9. Vitesse de descente\n");

  
    printf("Choisissez une ou plusieurs données à calculer (ex: 351 pour les options 3, 5 et 1) : ");
    scanf("%d", &choice);

    
    while (choice > 0) {
        temp_choice = choice % 10;
        switch (temp_choice) {
            case 1: calc_pressure_altitude = 1; break;
            case 2: calc_tas = 1; break;
            case 3: calc_ground_speed = 1; break;
            case 4: calc_range = 1; break;
            case 5: calc_takeoff = 1; break;
            case 6: calc_wing_loading = 1; break;
            case 7: calc_rate_of_climb = 1; break;
            case 8: calc_no_return = 1; break;
            case 9: calc_descent_speed = 1; break;
        }
        choice /= 10; 
    } 
}


