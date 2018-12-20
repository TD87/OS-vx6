#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    ps();
    set_priority(0);
    ps();
    exit();
}
