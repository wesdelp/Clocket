//
//  AudioUnitFactory.swift
//  ClocketSync
//
//  Created by Wes Delp on 10/1/20.
//

import CoreAudioKit

public class AudioUnitFactory: NSObject, AUAudioUnitFactory {
    var audioUnit: AUAudioUnit?

	public func beginRequest(with context: NSExtensionContext) {
	
	}

    @objc public func createAudioUnit(with componentDescription: AudioComponentDescription) throws -> AUAudioUnit {
        audioUnit = try ClocketSyncAudioUnit(componentDescription: componentDescription, options: [])
        
        return audioUnit!
    }
    
}