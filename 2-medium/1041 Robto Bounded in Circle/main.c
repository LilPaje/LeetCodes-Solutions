bool isRobotBounded(char* instructions) {
    int positionX = 0;
    int positionY = 0; 
    int direction = 0; 
    for (int i = 0; i < strlen(instructions); i++) {
        char current = instructions[i];
        switch (current) {
            case 'G':
                if (direction == 0) positionY++;  // Norte
                else if (direction == 1) positionX++;  // Leste
                else if (direction == 2) positionY--;  // Sul
                else positionX--;  // Oeste
                break;
            case 'R':
                direction = (direction + 1) % 4;
                break;
                
            case 'L':
                direction = (direction + 3) % 4;
                break;
        }
    }
    return (positionX == 0 && positionY == 0) || direction != 0;
}