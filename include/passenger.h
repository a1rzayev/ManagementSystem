#define MAX_PASSENGERS 50  // maximum number of passengers that can be managed

// structure to store passenger details
typedef struct {
    char name[50];  // name
    char passport_number[20];  // passport number
    char flight_number[10];  // flight number passenger bought 
    int seat_number;  // seat number
} Passenger;

extern Passenger passengers[MAX_PASSENGERS];  // passenger details array 
extern int passenger_count;  // counts number of booked passengers

// book a flight for a passenger
void book_flight();

// display the list of booked passengers
void display_passengers();
