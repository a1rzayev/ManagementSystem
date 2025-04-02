#define MAX_FLIGHTS 5  // maximum number of flights can be managed
#define SEATS_PER_FLIGHT 10  // number of seats per flight

// flight structure
typedef struct {
    char flight_number[10];  // flight number
    char departure[20];  // departure location
    char arrival[20];  // arrival location
    int total_seats;  // total number of seats in the flight
    int available_seats;  // number of seats currently available
    char seats[SEATS_PER_FLIGHT]; // array to track seat availability ('a' for available, 'b' for booked)
} Flight;

extern Flight flights[MAX_FLIGHTS];  // flight details array
extern int flight_count;  // counts number of added flights 

// initialize flights with default values
void initialize_flights();

// display available flights and details
void display_flights();
