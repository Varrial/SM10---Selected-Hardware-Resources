//
//  ViewController.h
//  SM10 - Selected Hardware Resources
//
//  Created by Gracjan Ulianowski on 06/12/2022.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    CLGeocoder *geocoder;
    CLPlacemark *placemark;
}


@property (weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *longtitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *AddressLabel;

@property (weak, nonatomic) IBOutlet UITextField *latitudeText;
@property (weak, nonatomic) IBOutlet UITextField *longtitudeText;
@property (weak, nonatomic) IBOutlet UITextView *addresText;
@property (weak, nonatomic) IBOutlet UIButton *currentLocationButton;

-(IBAction)getCurrentLocation:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *gestureLabel;

- (IBAction) tapGesture:(UITapGestureRecognizer *) sender;
- (IBAction) pinchGesture:(UIPinchGestureRecognizer *) sender;
- (IBAction) swipeGesture:(UISwipeGestureRecognizer *) sender;
- (IBAction) longPressGesture:(UILongPressGestureRecognizer *) sender;

NS_ASSUME_NONNULL_END

@end

