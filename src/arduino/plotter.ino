/* Constants */
const int FULL_CYCLE = 400;
const int FREQUENCY  = 1200;

/* Pin constants */
const int X_STEP        = 11; 
const int X_DIR         = 10;
const int Y_STEP        = 9;
const int Y_DIR         = 8;
const int BUTTON_PINS[] = {2, 3, 4, 5};


/*----------------------------------------------------------------------------*/
enum Direction
{
    FORWARD  = HIGH,
    BACKWARD = LOW
};


/*----------------------------------------------------------------------------*/
#define CREATE_MOVE_FUNC(DIRECTION)               \
    void                                          \
    move_##DIRECTION(Direction direction)         \
    {                                             \
        int i;                                    \
        digitalWrite(DIRECTION##_DIR, direction); \
        for (i=0; i<FULL_CYCLE; i++)              \
        {                                         \
            digitalWrite(DIRECTION##_STEP, HIGH); \
            delayMicroseconds(FREQUENCY);         \
            digitalWrite(DIRECTION##_STEP, LOW);  \
            delayMicroseconds(FREQUENCY);         \
        }                                         \
    }


/*----------------------------------------------------------------------------*/
/* Create move_X and move_Y functions: */
CREATE_MOVE_FUNC(X)
CREATE_MOVE_FUNC(Y)


/*----------------------------------------------------------------------------*/
void
setup()
{
    int i;
    
    pinMode(X_STEP, OUTPUT); 
    pinMode(X_DIR , OUTPUT);
    pinMode(Y_STEP, OUTPUT); 
    pinMode(Y_DIR , OUTPUT);

    for (i=0; i<(sizeof BUTTON_PINS / sizeof(int)); i++)
        pinMode(BUTTON_PINS[i], INPUT_PULLUP);
}


/*----------------------------------------------------------------------------*/
void
loop()
{
    if (digitalRead(BUTTON_PINS[0]) == LOW)
        move_Y(FORWARD);
    else if (digitalRead(BUTTON_PINS[1]) == LOW)
        move_Y(BACKWARD);
    else if (digitalRead(BUTTON_PINS[2]) == LOW)
        move_X(FORWARD);
    else if (digitalRead(BUTTON_PINS[3]) == LOW)
        move_X(BACKWARD);
}

