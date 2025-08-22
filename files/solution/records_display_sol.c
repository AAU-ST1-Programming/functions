#include <stdio.h>
#include <time.h>
struct Record
{
    int id;
    time_t date;
    char notes[100];
    double measurement;
};

void print_record(struct Record *rec);

int main()
{
    struct Record rec = {131, 1594974180, "Measurement recorded without issues", 93.3};
    print_record(&rec);
    return 0;
}

void print_record(struct Record *rec)
{
    printf("*** Record ***\n");
    printf("ID: %i\n", rec->id);
    printf("date: %s", ctime(&(rec->date)));
    printf("notes: %s\n", rec->notes);
    printf("Record: %.2f\n", rec->measurement);
}