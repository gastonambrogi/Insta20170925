#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
	this->cam.begin();

	float radius = 150;
	float lap = 10;
	float x, y;
	float noise_value;
	ofColor c;
	for (int i = 0; i < lap; i++) {
		c.setHsb(255 / lap * i, 255, 255);
		ofSetColor(c);
		for (float deg = 0; deg < 360; deg += 0.1) {
			x = radius * cos(deg * DEG_TO_RAD);
			y = radius * sin(deg * DEG_TO_RAD);

			noise_value = ofNoise(i, x * 0.05, y * 0.05, ofGetFrameNum() * 0.005);

			if (noise_value > 0.4) {
				x = radius * noise_value * cos(deg * DEG_TO_RAD);
				y = radius * noise_value * sin(deg * DEG_TO_RAD);
			}
			else {
				x = radius * 0.4 * cos(deg * DEG_TO_RAD);
				y = radius * 0.4 * sin(deg * DEG_TO_RAD);
			}

			ofEllipse(ofVec3f(x, y, 0), 0.8, 0.8);
		}
	}

	this->cam.end();
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
