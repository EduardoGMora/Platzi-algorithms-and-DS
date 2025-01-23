import turtle

def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(123)
        draw(myTurtle, length-2)

if __name__ == '__main__':
    myTurtle = turtle.Turtle()
    myWindow = turtle.Screen()

    colors = (
        '#006699',
        '#006666',
        '#660066',
        '#990000',
        '#ad3270',
        '#e65100',
        '#1a237e',
        '#827717',
        '#006064',
        '#f57f17',
        '#d50000',
        '#4a148c',
    )

    for color in colors:
        myTurtle.color(color)
        myTurtle.speed(20)
        draw(myTurtle, 100)

    myWindow.exitonclick()