#include <stdio.h>
enum
{
    Circle,
    Rectangle
} ShapeType;
struct
{
    union
    {
        float length;
        float radius;
    } dimensions;
    ShapeType type;
} Shape;

float calculateCircleArea(float radius)
{
    return 3.14159 * radius * radius;
}
float calculateRectangleArea(float length)
{
    return length * length;
}
int main()
{
    Shape shape;
    float area;
    scanf("%d", &shape.type);
    if (shape.type == Circle)
    {
        scanf("%f", &shape.dimensions.radius);
        area = calculateCircleArea(shape.dimensions.radius);
    }
    else if (shape.type == Rectangle)
    {
        scanf("%f", &shape.dimensions.length);
        area = calculateRectangleArea(shape.dimensions.length);
    }
    else
    {
        printf("Invalid shape type.\n");
        return 1;
    }
    printf("Area of the shape: %.2f\n", area);

    return 0;
}
