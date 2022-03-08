# HIGH LEVEL TEST PLAN

| Test no. | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 1 | Keypad | * | shall show instructions | shows the instruction| PASSED✔️ |
| 2 | Keypad | # | shall lock the door| locks the door | PASSED✔️ |
| 3 | Password input from keypad | 1234 | Shall Show welcome on display and unlock the door |  Shows welcome on display and unlocks the door | PASSED✔️ |
| 4 | Password input from keypad | 1111 | Shall Show wrong password on display and do not unlock the door | Shows wrong password on display and do not unlock the door | PASSED✔️ |

## workflow and tests
| Static Analysis |Dynamic Analysis|Build| Unity Testing | Codiga | Codacy |
| --- | --- | --- | --- | ---|---|
|[![CPP_Check](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/c-cpp_check.yml/badge.svg)](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/c-cpp_check.yml)|[![Dynamiccheck](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/DynamicAnalysis.yml/badge.svg)](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/DynamicAnalysis.yml)|[![BUILD_CHECK](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/build.yml/badge.svg)](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/build.yml)|[![Unity_Testing](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/unity%20testing.yml/badge.svg)](https://github.com/Nehalkamble/M2_EmbSys/actions/workflows/unity%20testing.yml)|![Codiga](https://api.codiga.io/project/31661/score/svg)   ![Codiga](https://api.codiga.io/project/31661/status/svg)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/cfa49caa6c5e42e3a726da10f087068c)](https://www.codacy.com/gh/Nehalkamble/M2_EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Nehalkamble/M2_EmbSys&amp;utm_campaign=Badge_Grade)|


# LOW LEVEL TEST PLAN
###  LCD/Keypad Configuration Test

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Keypad | 1 |shall Display 1 on lcd | Displays 1 on lcd | PASSED✔️ |
| 02 | Keypad | 2 |shall Display 2 on lcd | Displays 2 on lcd | PASSED✔️ |
| 03 | Keypad | 3 |shall Display 3 on lcd | Displays 3 on lcd | PASSED✔️ |
| 04 | Keypad | 4 |shall Display 4 on lcd | Displays 4 on lcd | PASSED✔️ |
| 05 | Keypad | 5 |shall Display 5 on lcd | Displays 5 on lcd | PASSED✔️ |
| 06 | Keypad | 6 |shall Display 6 on lcd | Displays 6 on lcd | PASSED✔️ |
| 07 | Keypad | 7 |shall Display 7 on lcd | Displays 7 on lcd | PASSED✔️ |
| 08 | Keypad | 8 |shall Display 8 on lcd | Displays 8 on lcd | PASSED✔️ |
| 09 | Keypad | 9 |shall Display 9 on lcd | Displays 9 on lcd | PASSED✔️ |
| 10 | Keypad | 0 |shall Display 0 on lcd | Displays 0 on lcd | PASSED✔️ |
| 11 | Keypad | * |shall Display * on lcd | Displays * on lcd | PASSED✔️ |
| 12 | Keypad | # |shall Display # on lcd | Displays # on lcd | PASSED✔️ |

### Motor/Actuator Test

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for right password | 1234 | Stepper motor rotates anticlockwise | Stepper motor rotates anticlockwise | PASSED✔️ |
| 02 | Check for wrong password | 1212 | Stepper motor shall not ratate |  Stepper motor does not ratate |PASSED✔️ |
| 03 | Check for door lock button | # | Stepper motor shall rotate clockwise |  Stepper motor rotates clockwise | PASSED✔️ |


