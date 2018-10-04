#pragma config(Motor,  port2,           wheelLF,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           wheelLB,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           wheelRF,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           wheelRB,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           ladderMotorLT, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           ladderMotorLB, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           ladderMotorRT, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           ladderMotorRB, tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*----------------------------------------------------------------------------------------------------*\
|*                           - Dual Joystick Control with Arm - 1 Remote -                            *|
|*                                      ROBOTC on VEX 2.0 Cortex                                      *|
|*                                                                                                    *|
|*  This program uses both the Left and the Right joysticks to run the robot using "tank control".    *|
|*  The Group 6 buttons on the top-right of the VEXnet Joystick are used to raise and lower an arm.   *|
|*                                                                                                    *|
|*                                        ROBOT CONFIGURATION                                         *|
|*    NOTES:                                                                                          *|
|*    1)  Ch1 is the X axis and Ch2 is the Y axis for the RIGHT joystick.                             *|
|*    2)  Ch3 is the Y axis and Ch4 is the X axis for the LEFT joystick.                              *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]              [Name]              [Type]              [Description]                   *|
|*    Motor - Port 2          rightMotor           VEX Motor           Right motor                    *|
|*    Motor - Port 3          leftMotor            VEX Motor           Left motor                     *|
|*    Motor - Port 6          armMotor             VEX Motor           Arm motor                      *|
\*----------------------------------------------------------------------------------------------------*/

//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++

task main()
{
	while(1 == 1)
	{

		//Driving Motor Control
		motor[wheelLF] = vexRT[Ch3] / 2;
		motor[wheelLB] = vexRT[Ch3] / 2;
		motor[wheelRF] = vexRT[Ch2] / 2;
		motor[wheelRB] = vexRT[Ch2] / 2;

		//Arm Control
		if(vexRT[Btn6U] == 1)
		{
			motor[ladderMotorLT] = 75;
			motor[ladderMotorRT] = 75;
			motor[ladderMotorLB] = 75;
			motor[ladderMotorRB] = 75;
		}
		else if(vexRT[Btn6D] == 1)
		{
			motor[ladderMotorLT] = -75;
			motor[ladderMotorRT] = -75;
			motor[ladderMotorLB] = -75;
			motor[ladderMotorRB] = -75;
		}
		else
		{
			motor[ladderMotorLT] = 0;
			motor[ladderMotorRT] = 0;
			motor[ladderMotorLB] = 0;
			motor[ladderMotorRB] = 0;
		}
	}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
