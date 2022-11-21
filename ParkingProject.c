#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Bus_Places = 5, Car_Places = 1, Bike_Places = 20, Auto_places = 15, Cycle_places = 20, Truck_places = 2;

int earnings = 0;

int BusCount = 0, CarCount = 0, BikeCount = 0, AutoCount = 0, CycleCount = 0, TruckCount = 0; // number of each vehicle parked in the parking stands.

int index1 = 0, index2 = 0, index3 = 0; // index1 is for vehicle number & index2 is for customer name & index3 is for today's date

struct customer
{
    char customerName[10][20], date[10][13];
    int vehicleNumber[10];
} data; // variable data is declared with 'Point'.

// this function is to print the receipt
void print_receipt(int charges_of_vehicle_parking)
{
    printf("\nHere is your's receipt!\n");
    printf("#######################\n");
    printf("Your Name: %s", data.customerName[index2]);
    printf("Your Vehicle numebr: %d\n", data.vehicleNumber[index1]);
    printf("Date: %s\n", data.date[index3]);
    printf("Your charges_of_vehicle_parking :%d\n", charges_of_vehicle_parking);
    printf("########################\n");
}

// this function use to handle bus parking operations
void Bus_parking()
{
    int charges_of_vehicle_parking;
    printf("Please Enter your name: ");
    fflush(stdin); // fflush() is used to immediately flush out the contents of an output stream
    fgets(data.customerName[index2],20,stdin);
    printf("Please Enter vehicle number: ");
    scanf("%d", &data.vehicleNumber[index1]);
    printf("Please Enter today's date: ");
    fflush(stdin);
    fgets(data.date[index3],13,stdin);
repeat:
    printf("Please enter charges_of_vehicle_parking: ");
    scanf("%d", &charges_of_vehicle_parking);
    if (charges_of_vehicle_parking < 200 || charges_of_vehicle_parking > 200)
    {
        printf("Please enter valid amount");
        goto repeat;
        
    }
    else
    {
        earnings = earnings + charges_of_vehicle_parking;
        printf("Your payment is successfully done\n");
    }
    print_receipt(charges_of_vehicle_parking);
    index1++;
    index2++;
    index3++;
    BusCount++;
}

// this function use to handle car parking operations
void car_park()
{
    int charges_of_vehicle_parking;
    printf("Please Enter your name: ");
    fflush(stdin);
    fgets(data.customerName[index2],20,stdin);
    printf("Please Enter vehicle number: ");
    scanf("%d", &data.vehicleNumber[index1]);
    printf("Please Enter today's date: ");
    fflush(stdin);
    fgets(data.date[index3],13,stdin);
repeat:
    printf("Enter parking charges_of_vehicle_parking: ");
    scanf("%d", &charges_of_vehicle_parking);
    if (charges_of_vehicle_parking < 150 || charges_of_vehicle_parking > 150)
    {
        printf("Please enter valid amount");
       goto repeat;
       
    }
    else
    {
        earnings = earnings + charges_of_vehicle_parking;
        printf("Your payment is successfully done\n");
    }
    print_receipt(charges_of_vehicle_parking);
    index1++;
    index2++;
    index3++;
    CarCount++;
}

// this function use to handle bike parking operations
void bike_park()
{
    int charges_of_vehicle_parking;
    printf("Please Enter your name: ");
    fflush(stdin);
    fgets(data.customerName[index2],20,stdin);
    printf("Please Enter vehicle number: ");
    scanf("%d", &data.vehicleNumber[index1]);
    printf("please Enter today's date: ");
    fflush(stdin);
    fgets(data.date[index3],13,stdin);
repeat:
    printf("Enter parking charges_of_vehicle_parking: ");
    scanf("%d", &charges_of_vehicle_parking);
    if (charges_of_vehicle_parking < 50 || charges_of_vehicle_parking > 50)
    {
        printf("Please enter valid amount");
        goto repeat;
        
    }
    else
    {
        earnings = earnings + charges_of_vehicle_parking;
        printf("Your payment is successfully done\n");
    }
    print_receipt(charges_of_vehicle_parking);
    index1++;
    index2++;
    index3++;
    BikeCount++;
}

// this function use to handle auto parking operations
void auto_park()
{
    int charges_of_vehicle_parking;
    printf("Please Enter your name: ");
    fflush(stdin);
    fgets(data.customerName[index2],20,stdin);
    printf("Please Enter vehicle number: ");
    scanf("%d", &data.vehicleNumber[index1]);
    printf("Please Enter today's date: ");
    fflush(stdin);
    fgets(data.date[index3],13,stdin);
repeat:
    printf("Enter parking charges_of_vehicle_parking: ");
    scanf("%d", &charges_of_vehicle_parking);
    if (charges_of_vehicle_parking < 100 || charges_of_vehicle_parking > 100)
    {
        printf("Please enter valid amount");
        goto repeat;
        
    }
    else
    {
        earnings = earnings + charges_of_vehicle_parking;
        printf("Your payment is successfully done\n");
    }
    print_receipt(charges_of_vehicle_parking);
    index1++;
    index2++;
    index3++;
    AutoCount++;
}

// this function use to handle cycle parking operations
void cycle_park()
{
    int charges_of_vehicle_parking;
    printf("Please Enter your name: ");
    fflush(stdin);
    fgets(data.customerName[index2],20,stdin);
    printf("Please Enter vehicle number: ");
    scanf("%d", &data.vehicleNumber[index1]);
    printf("Please Enter today's date: ");
    fflush(stdin);
    fgets(data.date[index3],13,stdin);
repeat:
    printf("Enter parking charges_of_vehicle_parking: ");
    scanf("%d", &charges_of_vehicle_parking);
    if (charges_of_vehicle_parking < 30 || charges_of_vehicle_parking > 30)
    {
        printf("Please enter valid amount");
        goto repeat;
      
    }
    else
    {
        earnings = earnings + charges_of_vehicle_parking;
        printf("Your payment is successfully done\n");
    }
    print_receipt(charges_of_vehicle_parking);
    index1++;
    index2++;
    index3++;
    CycleCount++;
}

// this function use to handle Truck parking operations
void truck_park()
{
    int charges_of_vehicle_parking;
    printf("Please Enter your name: ");
    fflush(stdin);
    fgets(data.customerName[index2],20,stdin);
    printf("Please Enter vehicle number: ");
    scanf("%d", &data.vehicleNumber[index1]);
    printf("Please Enter today's date: ");
    fflush(stdin);
    fgets(data.date[index3],13,stdin);
repeat:
    printf("Enter parking charges_of_vehicle_parking: ");
    scanf("%d", &charges_of_vehicle_parking);
    if (charges_of_vehicle_parking < 500 || charges_of_vehicle_parking > 500)
    {
        printf("Please enter valid amount");
        goto repeat;
        
    }
    else
    {
        earnings = earnings + charges_of_vehicle_parking;
        printf("Your payment is successfully done\n");
    }
    print_receipt(charges_of_vehicle_parking);
    index1++;
    index2++;
    index3++;
    TruckCount++;
}

// This function is used to handle parking operation
void park_vehicle()
{
    int choose;
again:
    printf("\n1.Bus                     2.Car\n");
    printf("3.Bike                      4.Auto\n");
    printf("5.Cycle                     6.Truck\n");
    printf("Please tell which vehicle do you want to park: ");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        if (Bus_Places == 0)
        {
            printf("######################");
            printf("\nSorry! Bus parking slot is not available\n");
            printf("#######################\n");
        }
        else
        {
            Bus_parking();
            Bus_Places--;
        }
        break;
    case 2:
        if (Car_Places == 0)
        {
            printf("#######################");
            printf("\nSorry! Car parking slot is not available\n");
            printf("#######################\n");
        }
        else
        {
            car_park();
            Car_Places--;
        }
        break;
    case 3:
        if (Bike_Places == 0)
        {
            printf("#######################");
            printf("\nSorry! Bike parking slot is not available\n");
            printf("#######################\n");
        }
        else
        {
            bike_park();
            Bike_Places--;
        }
        break;
    case 4:
        if (Auto_places == 0)
        {
            printf("#######################");
            printf("\nSorry! Auto parking slot is not available\n");
            printf("#######################\n");
        }
        else
        {
            auto_park();
            Auto_places--;
        }
        break;
    case 5:
        if (Cycle_places == 0)
        {
            printf("#######################");
            printf("\nSorry! Auto parking slot is not available\n");
            printf("#######################\n");
        }
        else
        {
            cycle_park();
            Cycle_places--;
        }
        break;
    case 6:
        if (Truck_places == 0)
        {
            printf("#######################");
            printf("\nSorry! Auto parking slot is not available\n");
             printf("#######################\n");
            
        }
        else
        {
            truck_park();
            Truck_places--;
        }
        break;
    default:
        printf("Invalid number try again\n");
        goto again;
        exit(0);
    }
}

// This function use to check parking insight
void check_insight()
{
    printf("\n             Today's insight               \n");
    printf("Total earnings: %d\n", earnings);
    printf("Total Bus parked: %d\n", BusCount);
    printf("Total Car parked: %d\n", CarCount);
    printf("Total Bike parked: %d\n", BikeCount);
    printf("Total Auto parked: %d\n", AutoCount);
    printf("Total Bike parked: %d\n", CycleCount);
    printf("Total Auto parked: %d\n", TruckCount);
}

// this function comment to customer and then exit out.
void exit_function(){
    printf("Thank you for using our parking stand\n");
}

// This is our main function in the code
int main()
{
    int choose;
    do
    {
        printf("\n             Welcome to ROYAL parking          \n");
        printf("vehicle_parking chart in ROYAL stands is given below: \n");
        printf("\n");
        printf("Bus charges_of_vehicle_parking: 200               Car charges_of_vehicle_parking: 150\n");
        printf("Bike charges_of_vehicle_parking: 50               Auto charges_of_vehicle_parking: 100\n");
        printf("Cycle charge of_vehicle parking:30                Truck charges of_vehicle_parking:500\n");
        printf("\nEnter 1 to park your vehicle\n");
        printf("Enter 2 to insight today\n");
        printf("Enter 3 to exit\n");
    again:
        printf("Please choose any option from the given above choice: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            park_vehicle();
            break;
        case 2:
            check_insight();
            break;
        case 3:
            exit_function();
            exit(0);
            break;
        default:
            printf("Invalid number try again\n");
            goto again;
          
            break;
        }
     } while (choose != 4);
}