# publishqueue-library-spark
Queues / delays the calling of cloud events (via Particle.publish) so it does not pass the limits defined by Particle

#Example

#In Action
:ok


event: spark/status
data: {"data":"online","ttl":"60","published_at":"2016-03-04T18:17:33.784Z","coreid":"1f0036000847343432313031"}

event: version
data: {"data":"v0.04.TAS.PQ","ttl":"60","published_at":"2016-03-04T18:17:33.995Z","coreid":"1f0036000847343432313031"}

event: EventName1
data: {"data":"11111","ttl":"60","published_at":"2016-03-04T18:17:39.529Z","coreid":"1f0036000847343432313031"}

event: EventName2
data: {"data":"22222","ttl":"60","published_at":"2016-03-04T18:17:49.534Z","coreid":"1f0036000847343432313031"}


event: EventName3
data: {"data":"33333","ttl":"60","published_at":"2016-03-04T18:17:59.539Z","coreid":"1f0036000847343432313031"}

event: EventName4
data: {"data":"44444","ttl":"60","published_at":"2016-03-04T18:18:09.544Z","coreid":"1f0036000847343432313031"}

event: EventName5
data: {"data":"55555","ttl":"60","published_at":"2016-03-04T18:18:19.549Z","coreid":"1f0036000847343432313031"}


event: EventName6
data: {"data":"66666","ttl":"60","published_at":"2016-03-04T18:18:29.554Z","coreid":"1f0036000847343432313031"}

event: EventName7
data: {"data":"77777","ttl":"60","published_at":"2016-03-04T18:18:39.561Z","coreid":"1f0036000847343432313031"}

event: EventName8
data: {"data":"88888","ttl":"60","published_at":"2016-03-04T18:18:49.564Z","coreid":"1f0036000847343432313031"}


event: EventName9
data: {"data":"99991","ttl":"60","published_at":"2016-03-04T18:18:59.569Z","coreid":"1f0036000847343432313031"}

event: EventName10
data: {"data":"99992","ttl":"60","published_at":"2016-03-04T18:19:09.574Z","coreid":"1f0036000847343432313031"}

event: EventName11
data: {"data":"99993","ttl":"60","published_at":"2016-03-04T18:19:19.579Z","coreid":"1f0036000847343432313031"}
