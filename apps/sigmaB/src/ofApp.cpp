#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int n = 25;
    ofBackground(255,255,255);
    ofSetColor(0,0,0);
    ofSetCircleResolution(100);
    ofFill();
    ofSeedRandom(mouseX);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            float x = ofMap(i, 0, 4, 15, 143);
            float y = ofMap(j, 0, 4, 15, 143);
            float r = ofRandom(14,14.75);
            if ((4 <= i && i <= 19 && 4 <= j && j <= 6) ||
                (4 <= i && i <= 19 && 19 <=j && j <= 21) ||
                (4 <= i && i <= 10 && 7 <= j && j <= 13 && j-i == 3) ||
                (5 <= i && i <= 11 && 7 <= j && j <= 13 && j-i == 2) ||
                (6 <= i && i <= 12 && 7 <= j && j <= 13 && j-i == 1) ||
                (13 <= j && j <= 18 && 4 <= i && i <= 10 && j+i == 22) ||
                (13 <= j && j <= 18 && 5 <= i && i <= 11 && j+i == 23) ||
                (13 <= j && j <= 18 && 6 <= i && i <= 12 && j+i == 24)
                ){
                    r = ofRandom(15.50,15.75);
            }
            ofDrawCircle(x,y,r);
            }
        }
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
