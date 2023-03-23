function setup() {
  createCanvas(400, 400);
}

function draw() {
  background(220);
}

function setup() {
  cols = 12;
  xOffset = 40;
  yOffset = 430;
  createCanvas(xOffset*cols, yOffset);
  
}

function draw() {
  background(255);
  noStroke();

  for (let c = 0; c < cols; c++){
    if (c == 0){
      diamond(-150,
              color(224,71,66,255),
              color(235,196,43,255),
              false);
      diamond(50,
              color(219,37,26,255),
              color(234,113,82,255),
              true);
      diamond(250,
              color(98,166,203,255),
              color(230,147,113,255),
              false);
    }
    else if (c == 1){
      diamond(-50,
             color(97,176,217,255),
             color(231,208,114,255),
             true);
      diamond(150,
             color(235,196,39,255),
             color(235,196,39,255),
             false);
      diamond(350,
             color(235,196,39,255),
             color(123,17,31,255),
             false);
    }
    else if (c == 2){
      diamond(-50,
             color(237,199,38,255),
             color(232,170,35,255),
             false);
      diamond(50,
             color(144,21,41,255),
             color(144,21,41,255),
             false);
      diamond(150,
             color(217,49,48,255),
             color(225,197,90,255),
             false);
      diamond(350,
             color(236,193,37,255),
             color(210,99,152,255),
             true);
    }
    else if (c == 3){
      diamond(-150,
             color(216,35,30,255),
             color(223,112,82,255),
             true);
      diamond(50,
             color(0,149,192,255),
             color(228,148,123,255),
             true);
      diamond(150,
             color(170,29,97,255),
             color(170,29,97,255),
             true);
      diamond(250,
             color(149,21,12,255),
             color(229,162,32,255),
             true);
    }
    else if (c == 4){
      diamond(-150,
             color(237,180,87,255),
             color(211,52,33,255),
             false);
      diamond(50,
             color(234,215,149,255),
             color(124,18,41,255),
             true);
      diamond(250,
             color(55,173,161,255),
             color(1,15,63,255),
             false);
    }
    else if (c == 5){
      diamond(-50,
             color(142,207,202,255),
             color(86,190,183,255),
             true);
      diamond(150,
             color(0,129,195,255),
             color(164,28,94,255),
             false);
      diamond(350,
             color(232,188,39,255),
             color(237,174,61,255),
             false);
    }
    else if (c == 6){
      diamond(-150,
             color(230,215,152,255),
             color(180,54,111,255),
             true);
      diamond(50,
             color(86,190,183,255),
             color(205,106,163,255),
             true);
      diamond(150,
             color(230,149,31,255),
             color(230,149,31,255),
             true);
      diamond(250,
             color(133,198,190,255),
             color(86,190,183,255),
             true);
    }
    else if (c == 7){
      diamond(-50,
             color(0,141,203,255),
             color(2,38,86,255),
             false);
      diamond(150,
             color(234,171,66,255),
             color(198,31,13,255),
             false);
      diamond(350,
             color(1,129,114,255),
             color(235,208,133,255),
             true);
    }
    else if (c == 8){
      diamond(-50,
             color(89,168,211,255),
             color(3,78,154,255),
             true);
      diamond(150,
             color(151,188,220,255),
             color(141,177,29,255),
             true);
      diamond(350,
             color(231,192,41,255),
             color(199,32,14,255),
             false);
    }
    else if (c == 9){
      diamond(-150,
             color(146,186,211,255),
             color(160,22,46,255),
             false);
      diamond(50,
             color(226,184,36,255),
             color(209,41,54,255),
             false);
      diamond(150,
             color(56,150,24,255),
             color(56,150,24,255),
             false);
      diamond(250,
             color(90,169,210,255),
             color(0,73,150,255),
             false);
    }
    else if (c == 10){
      diamond(-150,
             color(119,191,188,255),
             color(222,195,52,255),
             true);
      diamond(50,
             color(1,127,116,255),
             color(167,26,42,255),
             false);
      diamond(250,
             color(191,192,36,255),
             color(228,55,61,255),
             true);
    }
    else if (c == 11){
      diamond(-50,
             color(178,187,35,255),
             color(146,190,43,255),
             false);
      diamond(150,
             color(140,206,205,255),
             color(237,206,54,255),
             true);
      diamond(350,
             color(181,29,50,255),
             color(27,150,191,255),
             true);
    }
    
    
    translate(xOffset, 0);
  }
  
}

function diamond(yOff, colorLeft, colorRight, natural){
  if (natural){
    fill(colorLeft);
    triangle(0, yOff, 0, yOff + 100, xOffset, yOff + 200);
    fill(colorRight);
    triangle(0, yOff, xOffset, yOff + 100, xOffset, yOff + 200);
  }
  else {
    fill(colorLeft);
    triangle(xOffset, yOff, 0, yOff + 100, 0, yOff + 200);
    fill(colorRight);
    triangle(xOffset, yOff, xOffset, yOff + 100, 0, yOff + 200);
  }
}