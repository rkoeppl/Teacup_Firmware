// default thermistor lookup table

// How many thermistor tables we have
#define NUMTABLES 2

#define THERMISTOR_EXTRUDER	0
#define THERMISTOR_BED		1

// Thermistor lookup table, generated with --num-temps=50 and trimmed in lower temperature ranges.
// You may be able to improve the accuracy of this table in various ways.
//   1. Measure the actual resistance of the resistor. It's "nominally" 4.7K, but that's ± 5%.
//   2. Measure the actual beta of your thermistor:http://reprap.org/wiki/MeasuringThermistorBeta
//   3. Generate more table entries than you need, then trim down the ones in uninteresting ranges. (done)
// In either case you'll have to regenerate this table, which requires python, which is difficult to install on windows.
// Since you'll have to do some testing to determine the correct temperature for your application anyway, you
// may decide that the effort isn't worth it. Who cares if it's reporting the "right" temperature as long as it's
// keeping the temperature steady enough to print, right?
#define NUMTEMPS 102
// {ADC, temp*4 }, // temp
uint16_t temptable[NUMTABLES][NUMTEMPS][2] PROGMEM = {

// Thermistor table for the Extruder. If you want to get exact readings make sure to measure R2 appropriately!
// The thermistor used for this table was an Epocs B57560G104F

// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4555 --beta=4092 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4555
// beta: 4092
// max adc: 1023
{
   {1, 3324}, // 831.245067985 C
   {11, 1585}, // 396.252474229 C
   {21, 1325}, // 331.32932964 C
   {31, 1190}, // 297.645114323 C
   {41, 1101}, // 275.474490595 C
   {51, 1036}, // 259.168154846 C
   {61, 985}, // 246.369362718 C
   {71, 943}, // 235.884012164 C
   {81, 908}, // 227.028859934 C
   {91, 877}, // 219.378723164 C
   {101, 850}, // 212.652165901 C
   {111, 826}, // 206.653862026 C
   {121, 804}, // 201.243058701 C
   {131, 785}, // 196.3151827 C
   {141, 767}, // 191.790546509 C
   {151, 750}, // 187.607114114 C
   {161, 734}, // 183.715699896 C
   {171, 720}, // 180.076684692 C
   {181, 706}, // 176.657710401 C
   {191, 693}, // 173.432024496 C
   {201, 681}, // 170.377267302 C
   {211, 669}, // 167.474567825 C
   {221, 658}, // 164.70785891 C
   {231, 648}, // 162.063351148 C
   {241, 638}, // 159.529123527 C
   {251, 628}, // 157.094801199 C
   {261, 619}, // 154.751299129 C
   {271, 609}, // 152.49061616 C
   {281, 601}, // 150.305668094 C
   {291, 592}, // 148.190151275 C
   {301, 584}, // 146.138430239 C
   {311, 576}, // 144.145444526 C
   {321, 568}, // 142.206630857 C
   {331, 561}, // 140.317857748 C
   {341, 553}, // 138.475370233 C
   {351, 546}, // 136.675742876 C
   {361, 539}, // 134.915839614 C
   {371, 532}, // 133.192779262 C
   {381, 526}, // 131.503905728 C
   {391, 519}, // 129.846762188 C
   {401, 512}, // 128.219068561 C
   {411, 506}, // 126.618701801 C
   {421, 500}, // 125.043678555 C
   {431, 493}, // 123.492139831 C
   {441, 487}, // 121.962337391 C
   {451, 481}, // 120.452621604 C
   {461, 475}, // 118.961430553 C
   {471, 469}, // 117.487280209 C
   {481, 464}, // 116.028755524 C
   {491, 458}, // 114.584502302 C
   {501, 452}, // 113.153219732 C
   {511, 446}, // 111.733653483 C
   {521, 441}, // 110.324589267 C
   {531, 435}, // 108.924846792 C
   {541, 430}, // 107.533274022 C
   {551, 424}, // 106.148741686 C
   {561, 419}, // 104.770137965 C
   {571, 413}, // 103.396363295 C
   {581, 408}, // 102.026325232 C
   {591, 402}, // 100.658933307 C
   {601, 397}, // 99.2930938245 C
   {611, 391}, // 97.9277045264 C
   {621, 386}, // 96.5616490636 C
   {631, 380}, // 95.193791196 C
   {641, 375}, // 93.8229686397 C
   {651, 369}, // 92.4479864717 C
   {661, 364}, // 91.0676099844 C
   {671, 358}, // 89.6805568711 C
   {681, 353}, // 88.2854885992 C
   {691, 347}, // 86.8810008054 C
   {701, 341}, // 85.4656125124 C
   {711, 336}, // 84.0377539283 C
   {721, 330}, // 82.5957525369 C
   {731, 324}, // 81.1378171244 C
   {741, 318}, // 79.6620193031 C
   {751, 312}, // 78.1662719881 C
   {761, 306}, // 76.6483041443 C
   {771, 300}, // 75.1056309408 C
   {781, 294}, // 73.5355182138 C
   {791, 287}, // 71.9349398223 C
   {801, 281}, // 70.3005260563 C
   {811, 274}, // 68.6285006809 C
   {821, 267}, // 66.9146034001 C
   {831, 260}, // 65.153993415 C
   {841, 253}, // 63.3411281701 C
   {851, 245}, // 61.4696091069 C
   {861, 238}, // 59.5319829034 C
   {871, 230}, // 57.5194816754 C
   {881, 221}, // 55.4216779533 C
   {891, 212}, // 53.22601822 C
   {901, 203}, // 50.9171793761 C
   {911, 193}, // 48.4761601261 C
   {921, 183}, // 45.8789633185 C
   {931, 172}, // 43.094624341 C
   {941, 160}, // 40.0821493573 C
   {951, 147}, // 36.7855424039 C
   {961, 132}, // 33.1252686346 C
   {971, 115}, // 28.9825340427 C
   {981, 96}, // 24.1675388389 C
   {991, 73}, // 18.3466418647 C
   {1001, 43}, // 10.8401360547 C
   {1011, 0}, // -0.157748974426 C
},

// Thermistor table for the Heatbed. If you want to get exact readings make sure to measure R2 appropriately!
// The thermistor used for this table was an Epocs B57560G104F

// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4580 --beta=4092 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4580
// beta: 4092
// max adc: 1023
{
   {1, 3318}, // 829.616016745 C
   {11, 1582}, // 395.653631407 C
   {21, 1323}, // 330.84097107 C
   {31, 1188}, // 297.209646621 C
   {41, 1100}, // 275.07218256 C
   {51, 1035}, // 258.789398125 C
   {61, 984}, // 246.008594145 C
   {71, 942}, // 235.537654412 C
   {81, 906}, // 226.694443884 C
   {91, 876}, // 219.054455222 C
   {101, 849}, // 212.336691817 C
   {111, 825}, // 206.346127832 C
   {121, 803}, // 200.942223904 C
   {131, 784}, // 196.020563493 C
   {141, 766}, // 191.50157718 C
   {151, 749}, // 187.323319967 C
   {161, 733}, // 183.436677733 C
   {171, 719}, // 179.802088411 C
   {181, 705}, // 176.387240163 C
   {191, 692}, // 173.165418421 C
   {201, 680}, // 170.114295013 C
   {211, 668}, // 167.215025351 C
   {221, 657}, // 164.451564622 C
   {231, 647}, // 161.810142471 C
   {241, 637}, // 159.278854262 C
   {251, 627}, // 156.847339317 C
   {261, 618}, // 154.50652494 C
   {271, 608}, // 152.248420783 C
   {281, 600}, // 150.065952166 C
   {291, 591}, // 147.952823858 C
   {301, 583}, // 145.903407888 C
   {311, 575}, // 143.912650487 C
   {321, 567}, // 141.975994383 C
   {331, 560}, // 140.089313499 C
   {341, 552}, // 138.248857757 C
   {351, 545}, // 136.451206156 C
   {361, 538}, // 134.693226674 C
   {371, 531}, // 132.972041812 C
   {381, 525}, // 131.284998864 C
   {391, 518}, // 129.629644111 C
   {401, 512}, // 128.003700342 C
   {411, 505}, // 126.405047164 C
   {421, 499}, // 124.831703684 C
   {431, 493}, // 123.281813201 C
   {441, 487}, // 121.753629616 C
   {451, 480}, // 120.2455053 C
   {461, 475}, // 118.755880215 C
   {471, 469}, // 117.283272105 C
   {481, 463}, // 115.826267593 C
   {491, 457}, // 114.383514072 C
   {501, 451}, // 112.953712236 C
   {511, 446}, // 111.535609196 C
   {521, 440}, // 110.127992041 C
   {531, 434}, // 108.729681803 C
   {541, 429}, // 107.339527723 C
   {551, 423}, // 105.956401766 C
   {561, 418}, // 104.579193313 C
   {571, 412}, // 103.206803975 C
   {581, 407}, // 101.838142455 C
   {591, 401}, // 100.472119415 C
   {601, 396}, // 99.1076422777 C
   {611, 390}, // 97.7436098948 C
   {621, 385}, // 96.3789070256 C
   {631, 380}, // 95.0123985415 C
   {641, 374}, // 93.6429232791 C
   {651, 369}, // 92.2692874506 C
   {661, 363}, // 90.8902575047 C
   {671, 358}, // 89.5045523189 C
   {681, 352}, // 88.1108345795 C
   {691, 346}, // 86.7077011852 C
   {701, 341}, // 85.2936724726 C
   {711, 335}, // 83.8671800249 C
   {721, 329}, // 82.4265527738 C
   {731, 323}, // 80.9700010386 C
   {741, 317}, // 79.4955980642 C
   {751, 312}, // 78.0012585145 C
   {761, 305}, // 76.4847132388 C
   {771, 299}, // 74.9434794495 C
   {781, 293}, // 73.3748252113 C
   {791, 287}, // 71.7757268294 C
   {801, 280}, // 70.1428172972 C
   {811, 273}, // 68.4723233868 C
   {821, 267}, // 66.7599881711 C
   {831, 260}, // 65.0009746545 C
   {841, 252}, // 63.189744608 C
   {851, 245}, // 61.3199044379 C
   {861, 237}, // 59.3840065713 C
   {871, 229}, // 57.3732898485 C
   {881, 221}, // 55.2773347518 C
   {891, 212}, // 53.0835972837 C
   {901, 203}, // 50.7767658983 C
   {911, 193}, // 48.3378535447 C
   {921, 182}, // 45.7428809535 C
   {931, 171}, // 42.9609064421 C
   {941, 159}, // 39.9509663295 C
   {951, 146}, // 36.6571055471 C
   {961, 131}, // 32.9998468755 C
   {971, 115}, // 28.8604816153 C
   {981, 96}, // 24.0493448775 C
   {991, 72}, // 18.2330297294 C
   {1001, 42}, // 10.732298885 C
   {1010, 4} // 1.11618417895 C
}
};
