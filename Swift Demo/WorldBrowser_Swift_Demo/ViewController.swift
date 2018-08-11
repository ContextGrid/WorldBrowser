//
//  ViewController.swift
//  WorldBrowser_Swift_Demo
//
//  Created by TechnoMac-14 on 15/03/18.
//  Copyright © 2018 TechnoMac-14. All rights reserved.
//

import UIKit
import WorldBrowser
class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }
    override func viewDidAppear(_ animated: Bool) {

        self.present(DetectionViewController.sharedManager(), animated: true, completion: nil)
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

