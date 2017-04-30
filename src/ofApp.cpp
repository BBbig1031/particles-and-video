#include "ofApp.h"


//--------------------------------------------------------------

void ofApp::setup(){	
    //video
//    intro.loadMovie("intro.mp4");
//    intro.play();
    
    cage.loadMovie("walk.mp4");
    cage.play();
    
//    cyberbullying.loadMovie("cyberbullying.mp4");
//    cyberbullying.play();
//    
//    paparazzi.loadMovie("paparazzi.mp4");
//    paparazzi.play();
//    
    
    
    //particles
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	
	
	for (int i = 0; i < 1000; i++){
		particle myParticle;
       
		myParticle.setInitialCondition(ofRandom(0,1000),ofRandom(0,1000),0,0);
		
		particles.push_back(myParticle);
	}
	
}

//--------------------------------------------------------------
void ofApp::update(){
    //video
//    intro.update();
    cage.update();
//    cyberbullying.update();
//    paparazzi.update();
    
    
    
    //particles
    for (int i = 0; i < 2; i++){
        particle myParticle;
        
        myParticle.setInitialCondition(ofRandom(0,1000),ofRandom(0,1000),0,0);
        
        particles.push_back(myParticle);
    }
    
	
	for (int i = 0; i < particles.size(); i++){
        int distance =center.distance(particles[i].pos);
//        t = ofVec2f(particles[i].x,particles[i].y);
        cout<<distance<<endl;
        
        if(center.distance(particles[i].pos) <= 5){
            particles.erase(particles.begin() +i);
        }
        
        
        particles[i].resetForce();
		
		
		particles[i].addAttractionForce(ofGetWidth()/2, ofGetHeight()/2, 1000, 0.1);
//        cout<<particles[i].x<<endl;
		particles[i].addRepulsionForce(mouseX, mouseY, 60, 1);
		particles[i].addDampingForce();
		particles[i].update();
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
    //video
    float pixelRatio = 0.8;
    float pixelHeight =0.9;
    cage.draw(0,0,cage.getWidth()*pixelRatio, cage.getHeight()*pixelHeight);
    
    //particles
    ofSetColor(0x000000);
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].draw();
    
 
    
    
    
    
    
    
    


	}

}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
}

//--------------------------------------------------------------
void ofApp::keyReleased  (int key){ 
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
void ofApp::mouseReleased(){
}
