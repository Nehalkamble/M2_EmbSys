# HIGH LEVEL TEST PLAN

| Test no. | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 1 | Keypad | * | Goto reset password | --- | To be Done |
| 2 | Keypad | # | Goto change password | --- | To be Done |
| 3 | Password input from keypad | 1234 | Show door unlocked on display and unlock the door | --- | To be Done |
| 4 | Password input from keypad | 1111 | Show wrong password  and door does not unlocked on display and do not unlock the door | --- | To be Done |


# LOW LEVEL TEST PLAN
###  LCD/Keypad Configuration Test

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Keypad | 1 | Display 1 on lcd | --- | To be Done |
| 02 | Keypad | 2 | Display 2 on lcd | --- | To be Done |
| 03 | Keypad | 3 | Display 3 on lcd | --- | To be Done |
| 04 | Keypad | 4 | Display 4 on lcd | --- | To be Done |
| 05 | Keypad | 5 | Display 5 on lcd | --- | To be Done |
| 06 | Keypad | 6 | Display 6 on lcd | --- | To be Done |
| 07 | Keypad | 7 | Display 7 on lcd | --- | To be Done |
| 08 | Keypad | 8 | Display 8 on lcd | --- | To be Done |
| 09 | Keypad | 9 | Display 9 on lcd | --- | To be Done |
| 10 | Keypad | 0 | Display 0 on lcd | --- | To be Done |
| 11 | Keypad | * | Display * on lcd | --- | To be Done |
| 12 | Keypad | # | Display # on lcd | --- | To be Done |

### Motor/Actuator Test

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for right password | 1234 | Stepper motor rotates clockwise |  To be done | To be done |
| 02 | Check for wrong password | 0000 | Stepper motor does not ratate |  To be done | To be done |
| 03 | Check for door lock button | Door lock switch | Stepper motor rotates anti clockwise |  To be done | To be done |


