
# AVR Blink

This is a very simple Hello World programm to get started with avr microcontroller.

The microcontroller used in this project is an atmega328p (on an Arduino Nano board).

## Pinout

DDR = Data Direction Register (read or write)

PORT = Data Register (read or write)

PIN = Input Pins Register (read only)

### PORTD

|  Port | Bit | Comment |
|-------|-----|---------|
| D0    | 0   | RX      |
| D1    | 1   | TX      |
| D2    | 2   |         |
| D3    | 3   |         |
| D4    | 4   |         |
| D5    | 5   |         |
| D6    | 6   |         |
| D7    | 7   |         |

### PORTB

|  Port | Bit | Comment  |
|-------|-----|----------|
| D8    | 0   |          |
| D9    | 1   |          |
| D10   | 2   |          |
| D11   | 3   |          |
| D12   | 4   |          |
| D13   | 5   |          |
|       | 6   | unusable |
|       | 7   | unusable |


### PORTC

|  Port | Bit | Comment  |
|-------|-----|----------|
| A0    | 0   |          |
| A1    | 1   |          |
| A2    | 2   |          |
| A3    | 3   |          |
| A4    | 4   | SDA      |
| A5    | 5   | SCL      |
| A6    | 6   | read only, cant be digital |
| A7    | 7   | read only, cant be digital |