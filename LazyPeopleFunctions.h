


#define driveTrainL motor[driveL1] = motor[driveL2]
#define driveTrainR motor[driveR1] = motor[driveR2]


int Gerald;

void autoStack()
{
	while(vexRT[Btn7R] == 1 || Gerald == 1)
	{

		if(vexRT[Btn7R] == 1 || Gerald == 1)
		{
			motor[claw2] = -127;
			motor[armTop] = 127;
			delay(1250);
		}
		else
		{
			motor[claw2] = 0;
			motor[armTop] = 0;
		}

		if(vexRT[Btn7R] == 1 || Gerald == 1)
		{
			motor[claw2] = 127;
			delay(1250);
		}
		else
		{
			motor[claw2] = 0;
			motor[armTop] = 0;
		}

		if(vexRT[Btn7R] == 1 || Gerald == 1)
		{
			motor[armTop] = 0;
			delay(200);
			motor[armTop] = -127;
			delay(3250);
		}
		else
		{
			motor[claw2] = 0;
			motor[armTop] = 0;
		}

		if(vexRT[Btn7R] == 1 || Gerald == 1)
		{
			motor[armTop] = 0;
			motor[claw2] = -127;
			delay(200);
			motor[claw2] = 0;
		}
		else
		{
			motor[claw2] = 0;
			motor[armTop] = 0;
		}

	}
}

void drive()
	{
		driveTrainL = vexRT[Ch3];
		driveTrainR = vexRT[Ch2];
	}
/*
void drivet(tMotor Left, tMotor Right)
	{
		motor[Left] = vexRT[Ch3];
		motor[Right] = vexRT[Ch2];
	}
*/

//Connor's notes and stuff

//Subscribe to Jlewis1231 on YouTube at https://www.youtube.com/channel/UCp4cUslr3w2U_9wxkYXPFIg
/*
competition notes

comp. 1 10/14/17

Team A semis awards Design
Team B RIP did not get to quarters 31/31 teams
Team C semis
Team D quarters ripped apart robot after first 6 matches went to quarters with only drive train
Team E quarters lost 2-0 Record 2-4-0
Team F made finals awards excellence (ALL QUALIFIED TO STATES)

LARGE DESIGN CHANGE.

One Day redesign day before competition.10/27/17 - 10/28/17

comp. 2 10/28/17

Team A Finals 2-1 loss by nine points design Award states (ALL QUALIFIED TO STATES)
Team B Not picked Aine Best costume
Team C Quarters
Team D no pick Judges award
Team E Quarters with Team C
Team F Finals with A

design Tweaks ... hopefully

Comp. 3 11/11/17

Team A Teamed with F Quarters
Team B Not picked
Team C Not picked
Team D Not picked
Team E Not picked 32nd place
Team F Teamed with A Quarters

comp 3.5 12/16/17 $10
Team A N/A
Team B Quarter Finals
Team C Semi finals
Team D Semi Finals Design Excellence all go to states
Team E Quarters
Team F N/A

HAPPY NEW YEAR

Comp. 4 1/6/18 FIRESTONE
Team A
Team B
Team C
Team D
Team E
Team F



*/
