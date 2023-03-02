#include "ofApp.h"
bool bColorChanged; 

//--------------------------------------------------------------
void ofApp::setup(){
    
    bColorChanged = false;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255,204,0);
    ofEnableDepthTest();
    
    cam.begin();
    ofSetLineWidth(3);
    
    // Create white lines
    ofSetColor(255,255,255);
    if (bColorChanged){
        for (int i = 1; i <= 5; i++){
            ofPushMatrix();
            ofTranslate(-200,100,0);
            float num = 75 * i;
            ofDrawLine(num,100,25,num,100,-50);
            if (i == 1){
                for (int j = 0; j <= 4-i; j++) {
                    ofTranslate(0,-75,0);
                    ofDrawLine(num,100,25,num,100,-50);
                }
            }
            else {
                for (int j = 0; j <= 5-i; j++) {
                    ofTranslate(0,-75,0);
                    ofDrawLine(num,100,25,num,100,-50);
                }
            }
            
            ofPopMatrix();
        }
    }
    
    else {
        for (int i = 1; i <= 5; i++){
            ofPushMatrix();
            ofTranslate(-200,100,0);
            float num = 75 * i;
            ofDrawLine(num,100,100,num,100,25);
            if (i == 1){
                for (int j = 0; j <= 4-i; j++) {
                    ofTranslate(0,-75,0);
                    ofDrawLine(num,100,100,num,100,25);
                }
            }
            else {
                for (int j = 0; j <= 5-i; j++) {
                    ofTranslate(0,-75,0);
                    ofDrawLine(num,100,100,num,100,25);
                }
            }
            
            ofPopMatrix();
        }
    }
    
    
    // Create two leftmost vertical black lines
    ofSetColor(0,0,0);
    if (bColorChanged){
        for (int i = 1; i <= 2; i++){
            ofPushMatrix();
            ofTranslate(-200,100,0);
            float num = 75 * i;
            ofDrawLine(num,100,25,num,-200,25);
            ofTranslate(0,0,-75);
            ofDrawLine(num,100,25,num,-200,25);
            ofPopMatrix();
        }
        
        // Create remaining three vertical black lines
        for (int i = 1; i <= 3; i++){
            ofPushMatrix();
            ofTranslate(-50,100,0);
            float num = 75 * i;
            ofDrawLine(num,100,25,num,-200+num,25);
            ofTranslate(0,0,-75);
            ofDrawLine(num,100,25,num,-200+num,25);
            ofPopMatrix();
        }
        
        // Create top two horizontal black lines
        for (int i = 0; i <= 1; i++){
            ofPushMatrix();
            ofTranslate(-200,100,0);
            float ynum = 100 - 75*i;
            ofDrawLine(75,ynum,25,375,ynum,25);
            ofDrawLine(75,ynum,-50,375,ynum,-50);
            ofPopMatrix();
            }
        
        // Create bottom three horizontal black lines
        for (int i = 1; i <=3; i++) {
            ofPushMatrix();
            ofTranslate(-200,25,0);
            float ynum = 100 - 75*i;
            ofDrawLine(75,ynum,25,375-75*i,ynum,25);
            ofDrawLine(75,ynum,-50,375-75*i,ynum,-50);
            ofPopMatrix();
        }
    }
    else {
       
        for (int i = 1; i <= 2; i++){
            ofPushMatrix();
            ofTranslate(-200,100,0);
            float num = 75 * i;
            ofDrawLine(num,100,100,num,-200,100);
            ofTranslate(0,0,-75);
            ofDrawLine(num,100,100,num,-200,100);
            ofPopMatrix();
        }
        
        // Create remaining three vertical black lines
        for (int i = 1; i <= 3; i++){
            ofPushMatrix();
            ofTranslate(-50,100,0);
            float num = 75 * i;
            ofDrawLine(num,100,100,num,-200+num,100);
            ofTranslate(0,0,-75);
            ofDrawLine(num,100,100,num,-200+num,100);
            ofPopMatrix();
        }
        
        // Create top two horizontal black lines
        for (int i = 0; i <= 1; i++){
            ofPushMatrix();
            ofTranslate(-200,100,0);
            float ynum = 100 - 75*i;
            ofDrawLine(75,ynum,100,375,ynum,100);
            ofDrawLine(75,ynum,25,375,ynum,25);
            ofPopMatrix();
            }
        
        // Create bottom three horizontal black lines
        for (int i = 1; i <=3; i++) {
            ofPushMatrix();
            ofTranslate(-200,25,0);
            float ynum = 100 - 75*i;
            ofDrawLine(75,ynum,100,375-75*i,ynum,100);
            ofDrawLine(75,ynum,25,375-75*i,ynum,25);
            ofPopMatrix();
        }
    }
    
        
   
                   
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'c'){
        bColorChanged =! bColorChanged;
    }
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
