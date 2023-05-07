import ExpoModulesCore

public class TestExpoModule65: Module {
  public func definition() -> ModuleDefinition {
    Name("TestExpoModule65")

    AsyncFunction("queryTtiDurationAsync") { () -> Int64 in
      guard let performanceLogger = self.appContext?.reactBridge?.performanceLogger else {
        throw Exceptions.RuntimeLost()
      }
      return performanceLogger.duration(for: .RCTPLTTI)
    }
  }
}
