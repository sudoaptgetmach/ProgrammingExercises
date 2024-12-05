package exercism;

class AnnalynsInfiltration {

    public static boolean canFastAttack(boolean knightIsAwake) {
        boolean canFastAttack;
        if (knightIsAwake == false) {
            canFastAttack = true;
        } else {
            canFastAttack = false;
        }
        return canFastAttack;
    }

    public static boolean canSpy(boolean knightIsAwake, boolean archerIsAwake, boolean prisonerIsAwake) {
        boolean canSpy;
        if (knightIsAwake == true || archerIsAwake == true || prisonerIsAwake == true) {
            canSpy = true;
        } else {
            canSpy = false;
        }
        return canSpy;
    }

    public static boolean canSignalPrisoner(boolean archerIsAwake, boolean prisonerIsAwake) {
        boolean canSignalPrisoner;
        if (prisonerIsAwake == true && archerIsAwake == false) {
            canSignalPrisoner = true;
        } else {
            canSignalPrisoner = false;
        }
        return canSignalPrisoner;
    }

    public static boolean canFreePrisoner(boolean knightIsAwake, boolean archerIsAwake, boolean prisonerIsAwake, boolean petDogIsPresent) {
        boolean canFreePrisoner;
        if (petDogIsPresent == true && archerIsAwake == false) {
            canFreePrisoner = true;
        } else if (petDogIsPresent == false) {
            if (prisonerIsAwake == true && knightIsAwake == false && archerIsAwake == false) {
                canFreePrisoner = true;
            } else {
                canFreePrisoner = false;
            }
        } else {
            canFreePrisoner = false;
        }
        return canFreePrisoner;
    }
}

/* Poderia ser:
 * 
class AnnalynsInfiltration {

    public static boolean canFastAttack(boolean knightIsAwake) {
        // Attack if the knight is not awake
        return !knightIsAwake;
    }

    public static boolean canSpy(boolean knightIsAwake, boolean archerIsAwake, boolean prisonerIsAwake) {
        // Spy if any character is awake
        return knightIsAwake || archerIsAwake || prisonerIsAwake;
    }

    public static boolean canSignalPrisoner(boolean archerIsAwake, boolean prisonerIsAwake) {
        // Signal the prisoner if the prisoner is awake and the archer is not awake
        return prisonerIsAwake && !archerIsAwake;
    }

    public static boolean canFreePrisoner(boolean knightIsAwake, boolean archerIsAwake, boolean prisonerIsAwake, boolean petDogIsPresent) {
        // Free the prisoner if:
        // - The dog is present and the archer is not awake
        // - Or the dog is not present, the prisoner is awake, and both knight and archer are not awake
        return (petDogIsPresent && !archerIsAwake) || (!petDogIsPresent && prisonerIsAwake && !knightIsAwake && !archerIsAwake);
    }
}
 */
