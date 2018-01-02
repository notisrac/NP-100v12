rotate(0,0,0)
// case
polygon([
    [0, 0],
    [0, 104],
    [170, 104],
    [170, 0]
]);
// front panel
translate([170,0,0]) {
    polygon([
        [0, 0],
        [0, 104],
        [10, 104],
        [10, 0]
    ]);
}

// vu meter
translate([181,20,0]) {
    polygon([
        [0, 0],
        [0, 35],
        [40, 35],
        [40, 0]
    ]);
}

// volume knob
translate([181,60,0]) {
    polygon([
        [0, 0],
        [0, 40],
        [22, 40],
        [22, 0]
    ]);
}