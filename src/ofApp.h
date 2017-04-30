#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"

#include "particle.h"

class ofApp : public ofSimpleApp{
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed  (int key);
		void keyReleased (int key);
		
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased();
    

		vector <particle> particles;
    ofVec2f center = ofVec2f(ofGetWidth()/2,ofGetHeight()/2);
    ofVec2f t = ofVec2f(0,0);

    ofVideoPlayer intro;
    ofVideoPlayer cage;
    ofVideoPlayer cyberbullying;
    ofVideoPlayer paparazzi;
    
	
};

#endif
	
