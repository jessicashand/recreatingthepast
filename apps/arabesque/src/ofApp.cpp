#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofColor background(17, 23, 30);
    ofBackground(background);
    ofEnableAlphaBlending();
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    //float time = 10*PI;
    float time = ofGetElapsedTimef();
    int nodes = 500;
    float fnodes = (float)nodes;
    float r = 100;
    
    // Angle of rotation of the plane
    float rotateAngle = 72; // 360 / 5 (pentagon) = 72
    
    // Offsets for the ribbons
    ofColor ribbonColor(94, 101, 114);
    float xOffsetRight = 0;
    float xOffsetLeft = -300;
    float yOffset = -150;
    
    // Black rectangles
    float rectPosXLeft = -405;
    float rectPosXRight = 150;
    float rectPoxY = -252;
    float rectWidth = 255;
    float rectHeght = 205;
    
    bool drawRectangles = true;
    
    // Unravel the first pair of circles behind two rectangles
    if (time < PI){
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            drawRibbon(time, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            drawRibbon(time, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
        }
    }
    
    // Fix time such that they remain unraveled
    else if (time >= PI){
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            float time = PI;
            drawRibbon(time, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            float time = PI;
            drawRibbon(time, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
        }
    }
    
    ofPushMatrix();
    
    ofRotateDeg(rotateAngle);
    int rotations = 1;
    if ((PI < time) && (time < 2*PI)) {
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            drawRibbon(time - PI, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            drawRibbon(time - PI, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
    else if (time >= 2 * PI){
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            float time = PI;
            drawRibbon(time, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            float time = PI;
            drawRibbon(time, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
    
    // Remember the coordinates
    ofPushMatrix();
    
    // Rotate with angle so that references stay the same
    ofRotateDeg(rotateAngle);
    rotations = 2;
    if ((2*PI < time) && (time < 3*PI)) {
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            drawRibbon(time - 2*PI, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            drawRibbon(time - 2*PI, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
    else if (time >= 3 * PI){
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            float time = PI;
            drawRibbon(time, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            float time = PI;
            drawRibbon(time, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
    
    ofPushMatrix();
    
    ofRotateDeg(rotateAngle);
    rotations = 3;
    if ((3*PI < time) && (time < 4*PI)) {
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            drawRibbon(time - 3*PI, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            drawRibbon(time - 3*PI, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
    else if (time >= 4 * PI){
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            float time = PI;
            drawRibbon(time, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            float time = PI;
            drawRibbon(time, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
    
    ofPushMatrix();
    
    ofRotateDeg(rotateAngle);
    rotations = 4;
    if ((4*PI < time) && (time < 5*PI)) {
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            drawRibbon(time - 4*PI, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            drawRibbon(time - 4*PI, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
    else if (time >= 5 * PI){
        ofSetColor(ribbonColor);
        for (int i = 0; i < nodes; i++) {
            float time = PI;
            drawRibbon(time, i, r, fnodes, xOffsetRight, yOffset);
        }
        for (int j = 0; j < nodes; j++) {
            float time = PI;
            drawRibbon(time, j, r, fnodes, xOffsetLeft, yOffset);
        }
        ofSetColor(background);
        if (drawRectangles) {
            ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //for (int i = 0; i < rotations; i++){
            //    ofRotateDeg(-rotateAngle);
            //    ofDrawRectangle(rectPosXLeft, rectPoxY, rectWidth, rectHeght);
            //    ofDrawRectangle(rectPosXRight, rectPoxY, rectWidth, rectHeght);
            //}
            //ofRotateDeg(rotations*rotateAngle);
        }
    }
}

void ofApp::drawRibbon(float time, int i, float r, float fnodes, float xOffset, float yOffset){
    float current_node = (float) i / (fnodes);
    float angle = 2 * PI * current_node + (PI/2);
    float slide = ofMap(sin(time - PI/2), -1, 1, 0, r * 3);
    float x = r * -cos(angle) + current_node * slide + xOffset;
    float y = r * sin(angle) + yOffset;
    ofDrawCircle(x, y, 2);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
