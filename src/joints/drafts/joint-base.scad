/* INFO **
** INFO **/

/* User constants */
SCREW_DIAMETER = 3;
TUBE_DIAMETER  = 10;

/* Internal constants */
circle_resolution=32;

difference()
{
    circle(d=TUBE_DIAMETER + 3,
           $fn=circle_resolution);
    circle(d=TUBE_DIAMETER,
           $fn=circle_resolution);
}
